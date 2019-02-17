//
// Created by bellkross on 17.02.2019.
//

#ifndef TRANSPORT_POOL_H
#define TRANSPORT_POOL_H

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

	T* getResource() override;
	void returnResource(T*) override;
private:
	const int _defaultCapacity = 16;
	std::queue<T> resources;
	int _capacity;
};

#endif // TRANSPORT_POOL_H