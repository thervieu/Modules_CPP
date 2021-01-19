#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("PlasmaRifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle   &PlasmaRifle::operator= (const PlasmaRifle &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}