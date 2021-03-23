#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &src)
{
	*this = src;
	_type = "ice";
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice     &Ice::operator= (const Ice &rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs._xp;
	}
	return (*this);
}

AMateria    *Ice::clone(void) const
{
	return (new Ice(*this));
}

void    Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
