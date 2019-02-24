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
	int getCapacity() const override;
	int getItemsCount() const override;
	~TransportPool() override;
private:
	static TransportPool<T>* _instance;
	const int _defaultCapacity = 16;
	std::queue<T*> _resources;
	int _capacity;
	void fill(const int n);
};

template <class T>
TransportPool<T>* TransportPool<T>::_instance = 0;

template <class T>
TransportPool<T>& TransportPool<T>::getInstance() {
	if (_instance == 0) {
		std::lock_guard<std::mutex> lockGuard(std::mutex());
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
int TransportPool<T>::getCapacity() const {
	return _capacity;
}

template <class T>
int TransportPool<T>::getItemsCount() const {
	return _resources.size();
}

template <class T>
void TransportPool<T>::fill(const int n) {
	for (int i = 0; i < n; ++i) {
		_resources.push(new T);
	}
}

#endif // TRANSPORT_POOL_H