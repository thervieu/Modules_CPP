#include "Sheep.hpp"

Sheep::Sheep(void) : Victim()
{
	std::cout << "Beeeeeh!" << std::endl;
}

Sheep::Sheep(std::string const &name) : Victim(name)
{
	std::cout << "Beeeeeh!" << std::endl;
}

Sheep::Sheep(Sheep const &src) : Victim(src.getName())
{
	std::cout << "Beeeeeh!" << std::endl;
}

Sheep::~Sheep()
{
	std::cout << "Bé." << std::endl;
}

Sheep &				Sheep::operator=(Sheep const &rhs)
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Sheep const &i)
{
	(void)i;
	o << "Beeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeh!" << std::endl;
	return o;
}

void			Sheep::getPolymorphed() const
{
	std::cout << "Polymorph failed on " << this->getName() << " it's already a sheep!" << std::endl;
}
