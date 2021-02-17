#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &src)
{
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure    &Cure::operator= (const Cure &rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs._xp;
	}
	return (*this);
}

AMateria    *Cure::clone(void) const
{
	return (new Cure());
}

void    Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
