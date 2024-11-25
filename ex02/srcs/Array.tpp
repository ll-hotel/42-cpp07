#include "Array.hpp"
#include <exception>

template <typename T>
Array<T>::Array(void) : _size(0), _ptr(0)
{}

template <typename T>
Array<T>::Array(const Array &other) :
	_size(other._size), _ptr(new T[other._size])
{
	if (_ptr != 0) {
		for (unsigned int i = 0; i < _size; i += 1)
			_ptr[i] = other._ptr[i];
	}
}

template <typename T>
Array<T>::~Array(void)
{
	if (_ptr != 0)
		delete[] _ptr;
}

template <typename T>
Array<T> Array<T>::operator=(const Array<T> &other)
{
	if (_ptr != 0)
		delete[] _ptr;
	_size = other._size;
	_ptr = new T[_size];
	for (unsigned int i = 0; i < _size; i += 1)
		_ptr[i] = other._ptr[i];
	return *this;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _ptr(new T[n])
{}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (_ptr == 0 || n >= _size)
		throw std::exception();
	return _ptr[n];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _size;
}
