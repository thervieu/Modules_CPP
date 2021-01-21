#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class A;
class B;
class C;

class Base
{
	public:
		Base(void);
		Base(const Base&);
		virtual ~Base();

		Base	&operator=(const Base&);
};

#endif
