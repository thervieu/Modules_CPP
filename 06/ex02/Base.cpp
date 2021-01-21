#include "Base.hpp"

Base::Base(void)
{
	return;
}

Base::Base(const Base &rhs)
{
	*this = rhs;
}

Base::~Base(void)
{
	return;
}

Base	&Base::operator=(const Base &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
