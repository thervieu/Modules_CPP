#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:

        SuperMutant(void);
        SuperMutant(const SuperMutant &src);
        SuperMutant(int hp, const std::string &type);

        virtual ~SuperMutant(void);

        SuperMutant		&operator= (const SuperMutant &rhs);

        void    takeDamage(int damage);
};

#endif