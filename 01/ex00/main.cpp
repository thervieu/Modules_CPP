/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:48:58 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 21:51:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheStack(void)
{
    Pony    Tornado;

    Tornado.setName("Tornado");
    std::cout << "Name\t: " << Tornado.getName() << std::endl;
    Tornado.setColor("Marron");
    std::cout << "Color\t: " << Tornado.getColor() << std::endl;
    Tornado.setAge(19);
    std::cout << "Age\t: " << Tornado.getAge() << std::endl;
}

static void ponyOnTheHeap(void)
{
    Pony    *Eclair = new Pony();

    Eclair->setName("Eclair");
    std::cout << "Name\t: " << Eclair->getName() << std::endl;
    Eclair->setColor("Jaune");
    std::cout << "Color\t: " << Eclair->getColor() << std::endl;
    Eclair->setAge(8);
    std::cout << "Age\t: " << Eclair->getAge() << std::endl;
    delete Eclair;
}

int main(void)
{
    std::cout << "~~~~~ Pony on the Stack ~~~~~" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl;
    std::cout << "~~~~~ Pony on the Heap ~~~~~" << std::endl;
    ponyOnTheHeap();
    return (0);
}
