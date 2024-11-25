#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <cstddef>

template <typename T, typename Function>
void iter(T *array, std::size_t size, Function f)
{
	for (std::size_t i = 0; i < size; i += 1)
		f(array[i]);
}

#endif
