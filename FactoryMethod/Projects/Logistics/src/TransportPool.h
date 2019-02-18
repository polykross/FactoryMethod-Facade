//
// Created by bellkross on 17.02.2019.
//

#ifndef TRANSPORT_POOL_H
#define TRANSPORT_POOL_H

#include "Pool.h"
#include <queue>

template <class T>
class TransportPool : public Pool<T> {
public:
	TransportPool();
	~TransportPool() override;
	TransportPool(const TransportPool&) = delete;
	TransportPool(const TransportPool&&) = delete;
	TransportPool& operator=(const TransportPool&) = delete;
	TransportPool&& operator=(const TransportPool&&) = delete;

	T* getResource();
	void returnResource(T*);
private:
	const int _defaultCapacity = 16;
	std::queue<T*> _resources;
	int _capacity;
	void fill(const int n);
};

template <class T>
TransportPool<T>::TransportPool() : Pool<T>(), _capacity(_defaultCapacity){
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
void TransportPool<T>::fill(const int n) {
	for (int i = 0; i < n; ++i) {
		_resources.push(new T);
	}
}

#endif // TRANSPORT_POOL_H