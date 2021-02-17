#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:

		Victim(void);
		Victim(std::string);
		Victim(const Victim&);
		virtual	~Victim(void);
		Victim &operator=(const Victim&);

		void	getPolymorphed(void) const;
	
		std::string	getName(void) const;
	
	private:

		std::string	_name;
};

std::ostream &operator<<(std::ostream& os, const Victim& vict);

#endif