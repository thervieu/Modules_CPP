/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:59:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Brain.hpp"

class    Human
{
	public:

		Human(void);
		~Human(void);
		
		Brain	getBrain(void);
		std::string	identify(void);

	private:

		Brain	_brain;
};

#endif