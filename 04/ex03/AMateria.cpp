#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(const std::string &type)
{
	this->_xp = 0;
	this->_type = type;
	return ;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria    &AMateria::operator= (const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs._xp;
		this->_type = rhs._type;
	}
	return (*this);
}

void        AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}

const std::string   &AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int  AMateria::getXP(void) const
{
	return (this->_xp);
}

std::ostream &			operator<<(std::ostream &o, AMateria const &i)
{
	o << "Materia type is:" << i.getType() << " XP:" << i.getXP() << std::endl;
	return o;
}
