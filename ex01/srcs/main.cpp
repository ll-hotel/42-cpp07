#include "iter.hpp"
#include <iostream>
#include <string>

void add_42(int &n)
{
	std::cout << "before add_42: " << n << std::endl;
	n += 42;
	std::cout << "after add_42: " << n << std::endl;
}

void echo(std::string &s)
{
	std::cout << s << ' ';
}

int main(void)
{
	int ints[] = {0, 1, -7};
	std::string strings[] = {
		"Hello",
		"World",
		"!",
	};

	iter(ints, sizeof(ints) / sizeof(*ints), add_42);
	iter(strings, sizeof(strings) / sizeof(*strings), echo);
	std::cout << std::endl;
}
