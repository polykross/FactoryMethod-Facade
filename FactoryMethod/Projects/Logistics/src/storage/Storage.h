//
// Created by bellkross on 24.02.2019.
//

#ifndef STORAGE_H_
#define STORAGE_H_

template <class T>
class Storage {
public:
	Storage() = default;
	Storage(const Storage&) = delete;
	Storage& operator=(const Storage&) = delete;
	Storage(const Storage&&) = delete;
	Storage&& operator=(const Storage&&) = delete;

	virtual T* getResource() = 0;
	virtual void returnResource(T* resource) = 0;
	virtual bool isEmpty() const = 0;
	virtual size_t getCapacity() const = 0;
	virtual size_t getItemsCount() const = 0;
	virtual ~Storage() = default;
};

#endif // STORAGE_H_