#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("PowerFist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(const PowerFist &src)
{
	*this = src;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist   &PowerFist::operator= (const PowerFist &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

void	PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
    return ;
}