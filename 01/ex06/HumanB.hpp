/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 09:21:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class    HumanB
{
	public:

		HumanB(std::string);
		~HumanB(void);
		
		void	setWeapon(Weapon&);
		void	attack(void);

	private:

		std::string	_name;
		Weapon	*_weapon;

};

#endif