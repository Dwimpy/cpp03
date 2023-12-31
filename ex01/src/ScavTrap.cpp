/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:07:54 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 14:56:32 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void): ClapTrap("Gregory"), _guard_gate(false){
	this->_ep = 50;
	this->_ad = 20;
	std::cout << this->getName() << blue << " ScavTrap" << reset << " created." << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << this->getName() << blue << " ScavTrap" << reset << " destroyed." << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy){}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy){
	this->ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate(void){
	if (this->isDead() || this->noEnergy())
		return ;
	if (this->_guard_gate == false)
	{
		std::cout << blue << "ScavTrap " << reset << this->getName()
				  << " activated guard gate." << std::endl;
		this->_guard_gate = true;
	}
	else
	{
		std::cout << blue << "ScavTrap " << reset << this->getName()
				  << " deactivated guard gate." << std::endl;
		this->_guard_gate = false;
	}
	if ((int)(this->_ep - 1) < 0)
		this->_ep = 0;
	else
		this->_ep -= 1;
}

void	ScavTrap::attack(std::string const &target){
	if (this->isDead() || this->noEnergy())
		return ;
	std::cout << blue << "ScavTrap " << reset << this->getName()
			  << " attacks " << target
			  << " causing " << this->_ad
			  << " points of damage." << std::endl;
	if ((int)(this->_ep - 1) < 0)
		this->_ep = 0;
	else
		this->_ep -= 1;
}
