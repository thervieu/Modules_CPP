#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
#include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:

        RadScorpion(void);
        RadScorpion(const RadScorpion &src);
        RadScorpion(int hp, const std::string &type);

        virtual ~RadScorpion(void);

        RadScorpion		&operator= (const RadScorpion &rhs);
};

#endif