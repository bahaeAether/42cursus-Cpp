/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:41:41 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/19 00:11:49 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "No idea";
}

Brain::Brain(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain::Brain(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
}

Brain		&Brain::operator=(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
}

void		Brain::setIdeas(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

std::string	Brain::getIdeas(int index) const
{
	return (this->ideas[index]);
}
