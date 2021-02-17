
#include "Enemy.hpp"

Enemy::Enemy(void)
{
    return ;
}

Enemy::Enemy(const Enemy &src)
{
    *this = src;
    return ;
}

Enemy::Enemy(int hp, const std::string &type)
{
    _hp = hp;
    _type = type;
    return ;
}

Enemy::~Enemy(void)
{
    return ;
}

Enemy	&Enemy::operator= (const Enemy &rhs)
{
    if (this != &rhs)
    {
        _hp = rhs._hp;
        _type = rhs._type;
    }
    return (*this);
}

int	Enemy::getHP(void) const
{
    return (_hp);
}

const std::string	Enemy::getType(void) const
{
    return (_type);
}

void	Enemy::takeDamage(int damage)
{
    if (_hp - damage <= 0 && damage > 0)
    {
        _hp = 0;
    }
    else if (damage > 0)
    {
        _hp -= damage;
    }
    return ;
}