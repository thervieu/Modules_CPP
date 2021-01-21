#include "A.hpp"

A::A(void)
{
	return;
}

A::A(const A &rhs)
{
	*this = rhs;
}

A::~A(void)
{
	return;
}

A	&A::operator=(const A &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
