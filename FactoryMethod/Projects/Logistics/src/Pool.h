//
// Created by bellkross on 17.02.2019.
//

#ifndef POOL_H
#define POOL_H

template <class T>
class Pool {
public:
	T* getResource();
	Pool();
	virtual ~Pool() = 0;
	void returnResource(T*);
	Pool(const Pool&) = delete;
	Pool& operator=(const Pool&) = delete;
};

template <class T>
Pool<T>::Pool() = default;

template <class T>
Pool<T>::~Pool() = default;

#endif // POOL_H