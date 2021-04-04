#include "FireSword.hpp"

FireSword::FireSword(void): AWeapon("FireSword", 10, 30)
{
	return ;
}

FireSword::FireSword(const FireSword &src)
{
	*this = src;
}

FireSword::~FireSword(void)
{
	return ;
}

FireSword   &FireSword::operator= (const FireSword &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

void	FireSword::attack(void) const
{
    std::cout << "* shling *" << std::endl;
    return ;
}