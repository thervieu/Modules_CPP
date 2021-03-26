#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	_name = name;
	std::cout << "Zog Zog !" << std::endl;
}

Peon::Peon(const Peon & peon)
{
	std::cout << "Zog Zog !" << std::endl;
	*this = peon;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon& peon)
{
	if (this != &peon)
	{
		_name = peon._name;
	}
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed into a pink pony" << std::endl;
}
