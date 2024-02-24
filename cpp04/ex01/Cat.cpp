/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:08:45 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/19 08:44:54 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain("Cat idea");
	std::cout << "IT IS A CAT!" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	this->type = cpy.type;
	this->brain = new Brain(*(cpy.brain));
	std::cout << "IT IS A CAT!" << std::endl;
}

Cat		&Cat::operator=(const Cat &cpy)
{
	if (this == &cpy)
	{
		this->type = cpy.type;
		*(this->brain) = *(cpy.brain);
	}
	std::cout << "Cat operator= called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat is dying :c" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->brain->getIdeas(0) << ": Meowwww..." << std::endl;
}
