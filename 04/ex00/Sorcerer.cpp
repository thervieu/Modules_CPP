#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	_name = "default_sorcerer";
	_title = "default_title";
	std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << " is born!" << std::endl;

}

Sorcerer::Sorcerer(const Sorcerer & sorc)
{
	*this = sorc;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& sorc)
{
	if (this != &sorc)
	{
		_name = sorc._name;
		_title = sorc._title;
	}
	return (*this);
}

void	Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

std::string		Sorcerer::getName(void) const
{
	return (_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (_title);
}

std::ostream &operator<<(std::ostream& os, const Sorcerer& sorc)
{
	os << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and i like ponies!" << std::endl;
    return (os);
}
