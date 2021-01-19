#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
    public:

        Enemy(void);
        Enemy(const Enemy &src);
        Enemy(const std::string &type, int hp);

        virtual	~Enemy(void);

        Enemy	&operator= (const Enemy &rhs);

        int               getHP(void) const;
        const std::string getType(void) const;

        virtual void      takeDamage(int damage);

    protected:

        int               _hp;
        std::string       _type;
};

#endif