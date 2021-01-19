/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:31:04 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 01:17:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const & other);
		SuperTrap	&operator=(SuperTrap const & other);
		void		meleeAttack(std::string const & target);
		void		rangedAttack(std::string const & target);
		void		printStats(void);
};

#endif
