/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:18:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class    Zombie
{
	public:

		Zombie(void);
		Zombie(std::string, std::string);
		~Zombie(void);

		void    setName(std::string);
		void    setType(std::string);

		std::string	getName(void);
		std::string	getType(void);
		
		void	announce(void);

	private:

		std::string	_name;
		std::string	_type;

};

#endif