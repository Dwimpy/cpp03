/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:07:54 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 18:07:43 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void): ClapTrap("Gregory"), _st_hp(ClapTrap::_hp), _st_ep(ClapTrap::_ep), _st_ad(ClapTrap::_ad), _guard_gate(false){
	std::cout << this->getName() << blue << " ScavTrap" << reset << " created." << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << this->getName() << blue << " ScavTrap" << reset << " destroyed." << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy){
	this->_st_hp = copy._st_hp;
	this->_st_ep = copy._st_ep;
	this->_st_ad = copy._st_ad;
}

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

void ScavTrap::printAttributes() {
	std::cout << this->getName() << blue << " ScavTrap " << reset
			  << "has " << this->_st_hp << " Hit Points | "
			  << "has " << this->_st_ep << " Energy Points | "
			  << "has " << this->_st_ad << " Attack Damage" << std::endl;
}