#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout <<"pushed 5 and 17 " << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << "size = " << mstack.size() << std::endl << std::endl;
	
	mstack.pop();
	
	std::cout << "popped top" << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << "size = " << mstack.size() << std::endl << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	std::cout <<"pushed 3, 5, 737 and 0 " << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << "size = " << mstack.size() << std::endl << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "working with the iterator of the container" << std::endl;
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << " - ";
		++it;
	}
	std::cout << std::endl << std::endl;
	
	MutantStack<int> s(mstack);
	
	while (!s.empty())
		s.pop();

	std::cout << "copied stack then popped top until stack is empty" << std::endl;
	std::cout << "size: " << s.size() << std::endl << std::endl;
	
	std::cout << "still working with the iterator of the container" << std::endl;
	for (int i = 0; i < 10; i++)
		s.push(i * 2);
	
	it = s.begin();
	while (it != s.end())
		std::cout << *(it++) << " - ";
	
	std::cout << std::endl;
	
	return (0);
}