#include "span.hpp"
#include <iostream>
#include <ctime>
int main()
{
	srand(time(NULL));
	span sp = span(5010);
	int tab[10000] = {0};

	std::cout << "span._size = 5010" << std::endl;

	sp.addNumber(rand() % 300);
	sp.addNumber(rand() % 300);
	sp.addNumber(rand() % 300);
	sp.addNumber(rand() % 300);
	sp.addNumber(rand() % 300);

	std::cout << "Added 5 random numbers in span" << std::endl;
	
	std::cout << "current size : " << sp.getSize() << std::endl;
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
	
	sp.addNumber(tab, tab + 5000);
	
	std::cout << "add 0 5000 times in span" << std::endl;
	std::cout << "current size : " << sp.getSize() << std::endl;
	
	sp.addNumber(-80);
	
	std::cout << "add negative number -80 in span" << std::endl;
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
	
	try
	{
		std::cout << "add 6 new member in span thus overflowing : ";
		sp.addNumber(tab, tab + 5);
		sp.addNumber(98);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}