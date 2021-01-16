/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:23:13 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 09:46:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int     main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Format: ./replace [filename] [string to replace] [string to replace with]" << std::endl;
	else
	{
		std::ifstream in(av[1]);
		std::string output(av[1]);
		std::cout << "TEST1" << std::endl;
		output += ".replace";
		std::cout << "TEST2" << std::endl;
		std::ofstream out(output);
		std::cout << "TEST3" << std::endl;
		std::string wordToReplace(av[2]);
		std::string wordToReplaceWith(av[3]);
		std::cout << "TEST5" << std::endl;

		if (!in)
		{
			std::cout << "Could not open " << av[1] << std::endl;
			return 1;
		}

		std::string line;
		size_t len = wordToReplace.length();
		while (getline(in, line))
		{
			while (true)
			{
				size_t pos = line.find(wordToReplace);
				if (pos != std::string::npos)
					line.replace(pos, len, wordToReplaceWith);
				else 
					break;
			}
			out << line << std::endl;
		}
	}
}
