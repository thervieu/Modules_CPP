#include "Peon.hpp"

Peon::Peon(void)
{
	_name = "default_Peon";
	std::cout << "Zog Zog !" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	_name = name;
	std::cout << "Zog Zog !" << std::endl;

}

Peon::Peon(const Peon & sorc)
{
	*this = sorc;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon& sorc)
{
	if (this != &sorc)
	{
		_name = sorc._name;
	}
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed into a pink pony" << std::endl;
}
