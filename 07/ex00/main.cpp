#include "iter.hpp"

#include <iostream>
#include <string>

int		main(void)
{
	int i1 = 12;
	int i2 = 5;
	int i3 = -8;

	std::string	str1 = "bonjour";
	std::string	str2 = "bonjoure";
	std::string	str3 = "aurevoir";

	std::cout << "i1 = " << i1 << "; i2 = " << i2 << std::endl;
	std::cout << "max(i1, i2) = " << ft::max(i1, i2) << std::endl;
	std::cout << "min(i1, i2) = " << ft::min(i1, i2) << std::endl;
	std::cout << "swap(i1, i2) : ";
	ft::swap(i1, i2);
	std::cout << "i1 = " << i1 << "; i2 = " << i2 << std::endl << std::endl;

	std::cout << "i1 = " << i1 << "; i3 = " << i3 << std::endl;
	std::cout << "max(i1, i3) = " << ft::max(i1, i3) << std::endl;
	std::cout << "min(i1, i3) = " << ft::min(i1, i3) << std::endl;
	std::cout << "swap(i1, i3) : ";
	ft::swap(i1, i3);
	std::cout << "i1 = " << i1 << "; i3 = " << i3 << std::endl << std::endl;

	std::cout << "str1 = " << str1 << "; str2 = " << str2 << std::endl;
	std::cout << "max(str1, str2) = " << ft::max(str1, str2) << std::endl;
	std::cout << "min(str1, str2) = " << ft::min(str1, str2) << std::endl;
	std::cout << "swap(str1, str2) :";
	ft::swap(str1, str2);
	std::cout << " str1 = " << str1 << "; str2 = " << str2 << std::endl << std::endl;

	std::cout << "str1 = " << str1 << "; str3 = " << str3 << std::endl;
	std::cout << "max(str1, str3) = " << ft::max(str1, str3) << std::endl;
	std::cout << "min(str1, str3) = " << ft::min(str1, str3) << std::endl;
	std::cout << "swap(str1, str3) :";
	ft::swap(str1, str3);
	std::cout << " str1 = " << str1 << "; str3 = " << str3 << std::endl;

	return (0);
}