/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:18:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
}

Zombie::~Zombie(void)
{
}

void	Zombie::setName(std::string str)
{
	_name = str;
}

void	Zombie::setType(std::string str)
{
	_type = str;
}

std::string	Zombie::getName(void)
{
	return (_name);
}

std::string	Zombie::getType(void)
{
	return (_type);
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss ..." << std::endl;
}
