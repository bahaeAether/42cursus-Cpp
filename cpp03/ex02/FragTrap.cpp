/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 00:25:31 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 11:00:07 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "But this time it is a FragTrap!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "But this time it is a FragTrap!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copyScav) : ClapTrap(copyScav)
{
	std::cout << "But this time it is a FragTrap!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copyScav)
{
	this->name = copyScav.name;
	this->hitPoints = copyScav.hitPoints;
	this->energyPoints = copyScav.energyPoints;
	this->attackDamage = copyScav.attackDamage;
	std::cout << "FragTrap " << this->name << "'s assignment operator called!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << "'s destructor called!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "FragTrap ATTACK!" << std::endl;
		std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "FragTrap '" << this->name << "' cannot attack." << std::endl;
}

void	FragTrap::attack(ClapTrap &target)
{
	if (this == &target)
	{
		std::cout << "FragTrap '" << this->name << "' cannot attack itself." << std::endl;
		return ;
	}
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "FragTrap ATTACK!" << std::endl;
		std::cout << "FragTrap '" << this->name << "' attacks '" << target.getName() << "' causing " << this->attackDamage << " points of damage!" << std::endl;
		target.takeDamage(this->attackDamage);
		this->energyPoints--;
	}
	else
		std::cout << "FragTrap '" << this->name << "' cannot attack." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " says: High fives guys!" << std::endl;
}
