/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:32:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n): _nb(n)
{
	_zombies = new Zombie[n];
	
	for (int i = 0; i < _nb; i++)
	{
		_zombies[i].setName(randomName());
		_zombies[i].setType("Horde");
	}	
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] _zombies;
}

std::string	ZombieHorde::randomName(void)
{
	std::string names[] = {"Theo", "Gaspard", "Romain", "Clara", "Charlotte", "Ivan", "Alexandre"};
	return (names[rand() % 7]);
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _nb; i++)
		_zombies[i].announce();
}
