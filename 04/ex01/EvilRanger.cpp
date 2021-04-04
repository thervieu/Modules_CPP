#include "EvilRanger.hpp"

EvilRanger::EvilRanger(void) : Enemy(80, "EvilRanger")
{
    std::cout << "Hahaha !" << std::endl;
    return ;
}

EvilRanger::EvilRanger(const EvilRanger &src)
{
    *this = src;
    return ;
}

EvilRanger::~EvilRanger(void)
{
    std::cout << "Nooo !" << std::endl;
    return ;
}

EvilRanger	&EvilRanger::operator= (const EvilRanger &rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}