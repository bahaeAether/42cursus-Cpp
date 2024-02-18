/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 01:38:04 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 04:23:40 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unknown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << this->name << "'s constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	this->name = name;
	std::cout << this->name << "'s constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copyClap)
{
	this->name = copyClap.name;
	this->hitPoints = copyClap.hitPoints;
	this->attackDamage = copyClap.attackDamage;
	this->energyPoints = copyClap.energyPoints;
	std::cout << this->name << "'s copy constructor called!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copyClap)
{
	this->name = copyClap.name;
	this->hitPoints = copyClap.hitPoints;
	this->attackDamage = copyClap.attackDamage;
	this->energyPoints = copyClap.energyPoints;
	std::cout << this->name << "'s assignment operator called!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << "'s destructor called!" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "ClapTrap '" << this->name << "' attacks '" << target << "' causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap '" << this->name << "' cannot attack." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "ClapTrap '" << this->name << "' restores " << amount << " points of hit points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap '" << this->name << "' cannot be repaired." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints < amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap '" << this->name << "' takes " << amount << " points of damage!\n" << this->hitPoints << " hit points remaining!" << std::endl;
}

void	ClapTrap::attack(ClapTrap &target)
{
	if (this == &target)
	{
		std::cout << "ClapTrap '" << this->name << "' cannot attack itself." << std::endl;
		return ;
	}
	if (this->hitPoints && this->energyPoints)
	{
		std::cout << "ClapTrap '" << this->name << "' attacks '" << target.getName() << "' causing " << this->attackDamage << " points of damage!" << std::endl;
		target.takeDamage(this->attackDamage);
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap '" << this->name << "' cannot attack." << std::endl;
}
