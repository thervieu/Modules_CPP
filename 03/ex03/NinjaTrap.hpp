/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:31:04 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:38:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const & other);
		NinjaTrap	&operator=(NinjaTrap const & other);
		void		meleeAttack(std::string const & target);
		void		rangedAttack(std::string const & target);
		void		ninjaShoeBox(const NinjaTrap &ninja);
		void		ninjaShoeBox(const FragTrap &frag);
		void		ninjaShoeBox(const ScavTrap &scav);
		void		ninjaShoeBox(const ClapTrap &clap);
};

#endif
