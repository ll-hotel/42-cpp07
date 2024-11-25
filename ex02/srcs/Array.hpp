#pragma once

template <typename T>
class Array {
private:
	unsigned int _size;
	T *_ptr;
public:
	Array(void);
	Array(const Array &other);
	~Array(void);
	Array operator=(const Array &other);
	Array(unsigned int n);
	T& operator[](unsigned int n);
	unsigned int size(void) const;
};

#include "Array.tpp"
