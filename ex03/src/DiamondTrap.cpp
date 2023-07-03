/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:44:29 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 20:54:29 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(): ClapTrap("HardShell_clap_trap"), ScavTrap(), FragTrap(), _name("HardShell") {
	this->_dt_hp = this->FragTrap::_ft_hp;
	this->_dt_ep = this->ScavTrap::_st_ep;
	this->_dt_ad = this->FragTrap::_ft_ad;
	std::cout << this->_name << magenta << " DiamondTrap " << reset << " created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), ScavTrap(), FragTrap(), _name(name){
	this->_hp = this->FragTrap::_ft_hp;
	this->_ep = this->ScavTrap::_st_ep;
	this->_ad = this->FragTrap::_ft_ad;
	std::cout << this->_name << magenta << " DiamondTrap " << reset << " created." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->_name << magenta << " DiamondTrap " << reset << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy._name + "_clap_trap"), _name(copy._name){
	this->_dt_hp = this->FragTrap::_ft_hp;
	this->_dt_ep = this->ScavTrap::_st_ep;
	this->_dt_ad = this->FragTrap::_ft_ad;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
	if (this != &copy)
		*this = copy;
	return (*this);
}

void DiamondTrap::attack(std::string const &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << this->_name << magenta << " DiamondTrap " << reset
			  << "has parent " << red <<  " ClapTrap " << reset << " with name "
			  << this->getName() << std::endl;
}

void DiamondTrap::printAttributes() {
	std::cout << this->_name << magenta << " DiamondTrap " << reset
			  << "has " << this->_dt_hp << " Hit Points | "
			  << "has " << this->_dt_ep << " Energy Points | "
			  << "has " << this->_dt_ad << " Attack Damage" << std::endl;
}