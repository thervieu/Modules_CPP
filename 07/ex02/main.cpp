#include "Array.hpp"

int		main(void)
{
	Array<int> intR;

	Array<int> intR_copy(5);
	intR = intR_copy;
	for (int i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}

	std::cout << std::endl;
	for (int i = 0; i < intR_copy.size(); i++)
	{
		std::cout << intR_copy[i] << " ";
	}
	std::cout << std::endl;

	Array<float> floatR(25);
	for (int i = 0; i < floatR.size(); i++)
	{
		std::cout << floatR[i] << "f ";
	}
	std::cout << std::endl;

	Array<std::string> stringR(5);
	for (int i = 0; i < stringR.size(); i++)
	{
		stringR[i] = i + '0';
		std::cout << stringR[i] << "s ";
	}
	std::cout << std::endl;

	Array<std::string> stringR_copy = stringR;
	for (int i = 0; i < 5; i++)
		stringR_copy[i] = "42";
	for (int i = 0; i < stringR.size(); i++)
		std::cout << stringR[i] << "s <> " << stringR_copy[i] << std::endl;

	std::cout << "---" << std::endl;

	try
	{
		intR_copy[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		intR_copy[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}