//
// Created by bellkross on 17.02.2019.
//

#ifndef TRANSPORT_POOL_H
#define TRANSPORT_POOL_H

#include "Storage.h"

#include <queue>
#include <mutex>

template <class T>
class TransportPool : public Storage<T> {
public:
	static TransportPool<T>& getInstance();

	TransportPool();
	TransportPool(const TransportPool&) = delete;
	TransportPool(const TransportPool&&) = delete;
	TransportPool& operator=(const TransportPool&) = delete;
	TransportPool&& operator=(const TransportPool&&) = delete;

	T* getResource() override;
	void returnResource(T*) override;
	bool isEmpty() const override;
	size_t getCapacity() const override;
	size_t getItemsCount() const override;
	~TransportPool() override;
	void reset();
private:
	static TransportPool<T>* _instance;
	const size_t _defaultCapacity = 16;
	std::queue<T*> _resources;
	size_t _capacity;
	void fill(const size_t n);
};

template <class T>
TransportPool<T>* TransportPool<T>::_instance = 0;

template <class T>
TransportPool<T>& TransportPool<T>::getInstance() {
	if (_instance == 0) {
		std::mutex m;
		std::lock_guard<std::mutex> lockGuard(m);
		if (_instance == 0) {
			TransportPool<T>::_instance = new TransportPool<T>;
		}
	}
	return *_instance;
}


template <class T>
TransportPool<T>::TransportPool() : _capacity(_defaultCapacity){
	fill(_capacity);
}

template <class T>
TransportPool<T>::~TransportPool() {
	while (!_resources.empty()) {
		T* resource = _resources.front();
		_resources.pop();
		delete resource;
	}
}

template <class T>
T* TransportPool<T>::getResource() {
	if (_resources.empty()) {
		fill(_capacity);
		_capacity += _capacity;
	}
	T* result = _resources.front();
	_resources.pop();
	return result;
}

template <class T>
void TransportPool<T>::returnResource(T* res) {
	_resources.push(res);
}

template <class T>
bool TransportPool<T>::isEmpty() const {
	return _resources.empty();
}

template <class T>
size_t TransportPool<T>::getCapacity() const {
	return _capacity;
}

template <class T>
size_t TransportPool<T>::getItemsCount() const {
	return _resources.size();
}

template <class T>
void TransportPool<T>::fill(const size_t n) {
	for (size_t i = 0; i < n; ++i) {
		_resources.push(new T);
	}
}

template <class T>
void TransportPool<T>::reset() {
	while (!_resources.empty()) {
		T* resource = _resources.front();
		_resources.pop();
		delete resource;
	}
	_capacity = _defaultCapacity;
	fill(_capacity);
}

#endif // TRANSPORT_POOL_H