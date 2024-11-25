#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void)
{
	{
		int a = 2, b = 4;
		std::cout << "Original values: a=" << a << ", b=" << b << std::endl;
		swap(a, b);
		std::cout << "Swapped values: a=" << a << ", b=" << b << std::endl;
	}
	{
		double a = 42, b = 0;
		std::cout << "Original values: a=" << a << ", b=" << b << std::endl;
		std::cout << "Min: " << min(a, b) << std::endl;
		std::cout << "Max: " << max(a, b) << std::endl;
	}
	{
		std::string a = "hello", b = "hi";
		std::cout << "Original values: a=" << a << ", b=" << b << std::endl;
		swap(a, b);
		std::cout << "Swapped values: a=" << a << ", b=" << b << std::endl;
	}
}
