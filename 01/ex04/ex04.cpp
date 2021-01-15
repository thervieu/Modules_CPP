#include <iostream>
#include <iomanip>
#include <string>

int		main()
{
	std::string str = "STRING";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "string\t\t:\t" << str << std::endl;
	std::cout << "pointer\t\t:\t" << *ptr << std::endl;
	std::cout << "reference\t:\t" << ref << std::endl;
}