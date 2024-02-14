/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:58:06 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/13 15:23:36 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_atoi(std::string str)
{
	unsigned int	r;
	size_t			i;

	r = 0;
	i = 0;
	while (i < str.length())
	{
		r = r * 10 + (str[i] - 48);
		if (r > 2147483647)
			return (-1);
		i++;
	}
	return (r);
}

int	parseInt(std::string str)
{
	if (isNumber(str) == true && str.empty() == false)
		return (ft_atoi(str));
	else
		return (-1);
}

int main()
{
	int			index;
	Phonebook	phonebook;
	std::string	s_index;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD")
			phonebook.addContact(phonebook.parseContact());
		else if (command == "SEARCH")
		{
			phonebook.displayContacts();
			std::cout << "Enter an index: ";
			std::getline(std::cin, s_index);
			if (std::cin.eof())
				break;
			index = parseInt(s_index);
			while (index < 0 || index > 7)
			{
				std::cout << "Invalid index" << std::endl;
				std::cout << "Enter an index: ";
				std::getline(std::cin, s_index);
				if (std::cin.eof())
					exit(0);
				index = parseInt(s_index);
			}
			if (index < phonebook.getContactCount())
				phonebook.displayContact(index);
			else
				std::cout << "No contact at this index" << std::endl;
		}
		else if (command == "EXIT")
			break;
		else
		{
			std::cout << "Invalid command" << std::endl;
			continue;
		}
		std::cout << std::endl;
		std::cout << "--------------------------------" << std::endl;
	}
	return 0;
}
