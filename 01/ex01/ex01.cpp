/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:48:53 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 21:48:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string		*panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	
	delete panthere;
}

int main()
{
	memoryLeak();
}
