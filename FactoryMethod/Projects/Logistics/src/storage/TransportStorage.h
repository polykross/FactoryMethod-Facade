//
// Created by bellkross on 24.02.2019.
//

#ifndef TRANSPORT_STORAGE_H_
#define TRANSPORT_STORAGE_H_

#include "Storage.h"

#include <queue>
#include <mutex>

template<class T>
class TransportStorage : public Storage<T> {
public:
	static TransportStorage<T>& getInstance();

	TransportStorage();
	TransportStorage(const TransportStorage&) = delete;
	TransportStorage(const TransportStorage&&) = delete;
	TransportStorage& operator=(const TransportStorage&) = delete;
	TransportStorage&& operator=(const TransportStorage&&) = delete;

	T* getResource() override;
	void returnResource(T*) override;
	bool isEmpty() const override;
	size_t getCapacity() const override;
	size_t getItemsCount() const override;
	~TransportStorage() override;
private:
	static TransportStorage<T>* _instance;
	const size_t _defaultCapacity = 16;
	std::queue<T*> _resources;
	size_t _capacity;
	void fill();
};

template <class T>
TransportStorage<T>* TransportStorage<T>::_instance = 0;

template <class T>
TransportStorage<T>& TransportStorage<T>::getInstance() {
	if (_instance == 0) {
		std::mutex m;
		std::lock_guard<std::mutex> lockGuard(m);
		if (_instance == 0) {
			TransportStorage<T>::_instance = new TransportStorage<T>;
		}
	}
	return *_instance;
}

template <class T>
TransportStorage<T>::TransportStorage() : _capacity(_defaultCapacity) {
	fill();
}

template <class T>
TransportStorage<T>::~TransportStorage() {
	while (!_resources.empty()) {
		T* resource = _resources.front();
		_resources.pop();
		delete resource;
	}
}

template <class T>
T* TransportStorage<T>::getResource() {
	if (_resources.empty()) fill();
	T* result = _resources.front();
	_resources.pop();
	return result;
}

template <class T>
void TransportStorage<T>::returnResource(T* res) {
	delete res;
}

template <class T>
bool TransportStorage<T>::isEmpty() const {
	return _resources.empty();
}

template <class T>
size_t TransportStorage<T>::getCapacity() const {
	return _resources.size();
}

template <class T>
size_t TransportStorage<T>::getItemsCount() const {
	return _resources.size();
}

template <class T>
void TransportStorage<T>::fill() {
	while (_resources.size() < _capacity) {
		_resources.push(new T);
	}
}

#endif // TRANSPORT_STORAGE_H_