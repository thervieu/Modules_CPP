#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	print(const T &rhs)
{
	std::cout << rhs << std::endl;
}

int		main(void)
{
	int int_array[] = {3, 9, 51, -2, 8, -1234, -1, 5};
	std::string string_array[] = {"str1", "str2", "str3", "str4", "str5"};

	ft::iter(int_array, 8, print);
	ft::iter(string_array, 5, print);

	return (0);
}