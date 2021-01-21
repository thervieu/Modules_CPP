#include "B.hpp"

B::B(void)
{
	return;
}

B::B(const B &rhs)
{
	*this = rhs;
}

B::~B(void)
{
	return;
}

B	&B::operator=(const B &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
