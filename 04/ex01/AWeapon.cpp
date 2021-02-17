#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return;
}

AWeapon::AWeapon(const AWeapon &src)
{
	*this = src;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}


AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon           &AWeapon::operator= (const AWeapon &rhs)
{
    if (this != &rhs)
    {
        this->_damage = rhs._damage;
        this->_apcost = rhs._apcost;
        this->_name = rhs._name;
    }
    return (*this);
}

int               AWeapon::getAPCost(void) const
{
	return (_apcost);
}

int               AWeapon::getDamage(void) const
{
	return (_damage);
}

std::string AWeapon::getName(void) const
{
	return (_name);

}
