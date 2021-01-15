/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 21:56:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>
# include <iomanip>

class    Pony
{
	public:

		Pony(void);
		~Pony(void);

		void    setName(std::string);
		void    setColor(std::string);
		void    setAge(int);

		std::string	getName(void);
		std::string	getColor(void);
		int			getAge(void);

	private:

		std::string	_name;
		std::string	_color;
		int        	_age;

};

#endif