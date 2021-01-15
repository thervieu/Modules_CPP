/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:48:58 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:28:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


int	main(void)
{
	srand(time(NULL));

	Zombie      *zombie_1;
	Zombie      *zombie_2;
	ZombieEvent event;

	event.setZombieType("rapide");
	
	zombie_1 = event.randomChump();
	zombie_1->announce();
	delete zombie_1;

	event.setZombieType("lent");
	
	zombie_2 = event.randomChump();
	zombie_2->announce();
	delete zombie_2;
	return (0);
}
