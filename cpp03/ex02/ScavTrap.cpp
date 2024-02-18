/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 00:24:01 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 09:25:22 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "But this time it is a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "But this time it is a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copyScav) : ClapTrap(copyScav)
{
	std::cout << "But this time it is a ScavTrap!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copyScav)
{
	this->name = copyScav.name;
	this->hitPoints = copyScav.hitPoints;
	this->energyPoints = copyScav.energyPoints;
	this->attackDamage = copyScav.attackDamage;
	std::cout << "ScavTrap " << this->name << "'s assignment operator called!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << "'s destructor called!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "SCAVTRAP ATTACK!" << std::endl;
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ScavTrap '" << this->name << "' cannot attack." << std::endl;
}

void	ScavTrap::attack(ClapTrap &target)
{
	if (this == &target)
	{
		std::cout << "ScavTrap '" << this->name << "' cannot attack itself." << std::endl;
		return ;
	}
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "SCAVTRAP ATTACK!" << std::endl;
		std::cout << "ScavTrap '" << this->name << "' attacks '" << target.getName() << "' causing " << this->attackDamage << " points of damage!" << std::endl;
		target.takeDamage(this->attackDamage);
		this->energyPoints--;
	}
	else
		std::cout << "ScavTrap '" << this->name << "' cannot attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap '" << this->name << "' have entered the GATE KEEPER mode." << std::endl;
}
