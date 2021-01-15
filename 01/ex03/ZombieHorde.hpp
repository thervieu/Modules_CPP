/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:28:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include <iomanip>

# include "Zombie.hpp"

class    ZombieHorde
{
	public:

		ZombieHorde(int);
		~ZombieHorde(void);

		std::string	randomName(void);
		void	announce(void);

	private:

		int		_nb;
		Zombie	*_zombies;
};

#endif