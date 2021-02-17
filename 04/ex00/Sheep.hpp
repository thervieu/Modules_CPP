#ifndef SHEEP_HPP
# define SHEEP_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sheep : public Victim
{

	public:

        Sheep(void);
		Sheep(std::string const &name);
		Sheep(Sheep const &src);
		virtual	~Sheep();

		Sheep &		operator=(Sheep const &rhs);

		virtual void	getPolymorphed() const;

	private:

};

std::ostream &			operator<<(std::ostream &o, Sheep const &i);

#endif