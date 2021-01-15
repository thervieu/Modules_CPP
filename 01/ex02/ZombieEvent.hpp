/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:13:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include <iomanip>

# include "Zombie.hpp"

class    ZombieEvent
{
	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string);
		Zombie	*newZombie(std::string);
		Zombie	*randomChump(void);


	private:

		std::string	_type;

};

#endif