/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:13:42 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/19 08:49:53 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain("Dog idea");
	std::cout << "IT IS A DOG!" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	this->type = cpy.type;
	this->brain = new Brain(*(cpy.brain));
	std::cout << "IT IS A DOG!" << std::endl;
}

Dog		&Dog::operator=(const Dog &cpy)
{
	if (this == &cpy)
	{
		this->type = cpy.type;
		*(this->brain) = *(cpy.brain);
	}
	std::cout << "Dog operator= called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog is dying :c" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->brain->getIdeas(0) << ": Woof Woof !!" << std::endl;
}
