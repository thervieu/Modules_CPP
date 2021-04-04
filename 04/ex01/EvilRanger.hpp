#ifndef EVILRANGER_HPP
# define EVILRANGER_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class EvilRanger: public Enemy
{
    public:

        EvilRanger(void);
        EvilRanger(const EvilRanger &src);
        EvilRanger(int hp, const std::string &type);

        virtual ~EvilRanger(void);

        EvilRanger		&operator= (const EvilRanger &rhs);
};

#endif