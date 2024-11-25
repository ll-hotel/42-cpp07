#include "Array.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(void)
{
	{
		Array<int> i;
		std::cout << "Size of i: " << i.size() << std::endl;
		try {
			i[0] = 0;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Array<double> array(42);
		Array<double> array_cpy(array);

		array[0] = std::rand();

		std::cout << "array first element: " << array[0] << std::endl;
		std::cout << "array_cpy first element: " << array_cpy[0] << std::endl;
	}
	{
		Array<std::string> strings(4);

		strings[0] = "Hello";
		strings[1] = " ";
		strings[2] = "World";
		strings[3] = "!";

		std::cout << "original: \"";
		for (unsigned int i = 0; i < strings.size(); i += 1)
			std::cout << strings[i];
		std::cout << '"' << std::endl;

		Array<std::string> copy = strings;
		std::cout << "copy: \"";
		for (unsigned int i = 0; i < copy.size(); i += 1)
			std::cout << copy[i];
		std::cout << '"' << std::endl;
	}
}
