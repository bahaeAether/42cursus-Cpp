/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:58:30 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/13 16:31:49 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->contactCount = 0;
	this->contactIndex = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::setContactCount(void)
{
	if (this->contactCount < 8)
		this->contactCount++;
}

int		Phonebook::getContactCount(void)
{
	return (this->contactCount);
}

void	Phonebook::setContactIndex(void)
{
	if (this->contactIndex < 7)
		this->contactIndex++;
	else
		this->contactIndex = 0;
}

int		Phonebook::getContactIndex(void)
{
	return (this->contactIndex);
}

void	Phonebook::displayContacts()
{
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->contactCount; i++)
	{
		std::cout << "         " << i << "|";
		if (this->contacts[i].getFirstName().length() > 10)
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
		else
		{
			for (int j = 0; (size_t)j < 10 - this->contacts[i].getFirstName().length(); j++)
				std::cout << " ";
			std::cout << this->contacts[i].getFirstName();
			std::cout << "|";
		}
		if (this->contacts[i].getLastName().length() > 10)
			std::cout << this->contacts[i].getLastName().substr(0, 9) << ".|";
		else
		{
			for (int j = 0; (size_t)j < 10 - this->contacts[i].getLastName().length(); j++)
				std::cout << " ";
			std::cout << this->contacts[i].getLastName();
			std::cout << "|";
		}
		if (this->contacts[i].getNickname().length() > 10)
			std::cout << this->contacts[i].getNickname().substr(0, 9) << ".|";
		else
		{
			for (int j = 0; (size_t)j < 10 - this->contacts[i].getNickname().length(); j++)
				std::cout << " ";
			std::cout << this->contacts[i].getNickname();
			std::cout << "|";
		
		}
		std::cout << std::endl;
	}
}

void	Phonebook::displayContact(int index)
{
	std::cout << std::endl;
	std::cout << "First name:.... |" << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last name:..... |" << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nickname:...... |" << this->contacts[index].getNickname() << std::endl;
	std::cout << "Phone number:.. |" << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: |" << this->contacts[index].getDarkestSecret() << std::endl;
}

bool	isNumber(std::string input)
{
	for (int i = 0; (size_t)i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

bool	isEmpty(std::string input)
{
	for (int i = 0; (size_t)i < input.length(); i++)
	{
		if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n' && input[i] != '\v' && input[i] != '\f' && input[i] != '\r' && input[i] >= 32 && input[i] <= 126)
			return (false);
	}
	std::cout << "is empty" << std::endl;
	return (true);
}

bool	isName(std::string input)
{
	for (int i = 0; (size_t)i < input.length(); i++)
	{
		if (!isalpha(input[i]) && input[i] != ' ' && input[i] != '\t' && input[i] != '\n' && input[i] != '\v' && input[i] != '\f' && input[i] != '\r')
		{
			std::cout << "input[i] = " << input[i] << std::endl;
			return (false);
		}
	}
	return (true);
}

std::string	trim(std::string input)
{
	std::string	trimmed;
	int			i;

	i = 0;
	while (input[i] == ' ' || input[i] == '\t' || input[i] == '\n' || input[i] == '\v' || input[i] == '\f' || input[i] == '\r')
		i++;
	trimmed = input.substr(i);
	i = trimmed.length() - 1;
	while (trimmed[i] == ' ' || trimmed[i] == '\t' || trimmed[i] == '\n' || trimmed[i] == '\v' || trimmed[i] == '\f' || trimmed[i] == '\r')
		i--;
	trimmed = trimmed.substr(0, i + 1);
	i = 0;
	while ((size_t)i < trimmed.length())
	{
		if (trimmed[i] == '\t' || trimmed[i] == '\n' || trimmed[i] == '\v' || trimmed[i] == '\f' || trimmed[i] == '\r')
			trimmed[i] = ' ';
		i++;
		while ((trimmed[i] == ' ' || trimmed[i] == '\t' || trimmed[i] == '\n' || trimmed[i] == '\v' || trimmed[i] == '\f' || trimmed[i] == '\r') 
			&& (trimmed[i + 1] == ' ' || trimmed[i + 1] == '\t' || trimmed[i + 1] == '\n' || trimmed[i + 1] == '\v' || trimmed[i + 1] == '\f' || trimmed[i + 1] == '\r'))
			trimmed.erase(i + 1, 1);
	}
	return (trimmed);
}

Contact	Phonebook::parseContact(void)
{
	Contact	contact;
	std::string	input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(0);
	while (isEmpty(input) == true || isName(input) == false)
	{
		std::cout << "Invalid first name, please enter a valid first name" << std::endl;
		std::cout << "First name: ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	}
	contact.setFirstName(trim(input));
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(0);
	while (isEmpty(input) == true || isName(input) == false)
	{
		std::cout << "Invalid last name, please enter a valid last name" << std::endl;
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	}
	contact.setLastName(trim(input));
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(0);
	while (isEmpty(input) == true)
	{
		std::cout << "Invalid nickname, please enter a valid nickname" << std::endl;
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	}
	contact.setNickname(trim(input));
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(0);
	while(isNumber(input) == false || isEmpty(input) == true)
	{
		std::cout << "Invalid phone number, please enter a 10 digit phone number" << std::endl;
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	}
	contact.setPhoneNumber(trim(input));
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(0);
	while (isEmpty(input) == true)
	{
		std::cout << "Invalid darkest secret, please enter a valid darkest secret" << std::endl;
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	}
	contact.setDarkestSecret(trim(input));
	return (contact);
}

void	Phonebook::addContact(Contact contact)
{
	this->contacts[this->contactIndex].setFirstName(contact.getFirstName());
	this->contacts[this->contactIndex].setLastName(contact.getLastName());
	this->contacts[this->contactIndex].setNickname(contact.getNickname());
	this->contacts[this->contactIndex].setPhoneNumber(contact.getPhoneNumber());
	this->contacts[this->contactIndex].setDarkestSecret(contact.getDarkestSecret());
	this->setContactCount();
	this->setContactIndex();
}
