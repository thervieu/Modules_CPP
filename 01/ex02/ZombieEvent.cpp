/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:12:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie  *zombie;
	std::string names[] = {"Theo", "Gaspard", "Romain", "Clara", "Charlotte"};

	if (this->_type == "")
		this->setZombieType("walking");
	zombie = this->newZombie(names[rand() % 5]);
	return (zombie);
}
