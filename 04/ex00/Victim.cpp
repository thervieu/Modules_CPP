#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & sorc)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	*this = sorc;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " died for no apparent reasons!" << std::endl;
}

Victim &Victim::operator=(const Victim& sorc)
{
	if (this != &sorc)
	{
		_name = sorc._name;
	}
	return (*this);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::string	Victim::getName(void) const
{
	return (_name);
}

std::ostream &operator<<(std::ostream& os, const Victim& vict)
{
	os << "I'm " << vict.getName() << " and I like otters!" << std::endl;
    return (os);
}
