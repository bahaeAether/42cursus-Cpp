/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:31:49 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/14 21:42:08 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	level;

	std::cout << "Enter the level of complain (DEBUG, INFO, WARNING, ERROR): " << std::endl;
	std::getline(std::cin, level);
	if (std::cin.eof())
		return (0);
	while (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		if (level.empty())
			std::cout << "You must enter a level" << std::endl;
		else
			std::cout << "This level does not exist" << std::endl;
		std::cout << "Enter the level of complain (DEBUG, INFO, WARNING, ERROR): " << std::endl;
		std::getline(std::cin, level);
		if (std::cin.eof())
			return (0);
	}
	harl.complain(level);
	return (0);
}
