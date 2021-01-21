#include "C.hpp"

C::C(void)
{
	return;
}

C::C(const C &rhs)
{
	*this = rhs;
}

C::~C(void)
{
	return;
}

C	&C::operator=(const C &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
