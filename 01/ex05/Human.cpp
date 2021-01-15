/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:59:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human(void)
{
}

Human::~Human(void)
{
}

Brain	Human::getBrain(void)
{
	return (_brain);
}

std::string	Human::identify(void)
{
	return (_brain.identify());
}
