/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:28:39 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 16:59:59 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(): _name("Johnny"), _hp(100), _ep(50), _ad(20) {
	std::cout << this->_name << red << " ClapTrap " << reset << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(100), _ep(50), _ad(20){
	std::cout << this->_name << red << " ClapTrap " << reset << " created." << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->_name << red << " ClapTrap " << reset << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name) {
	if (this != &copy)
		*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	this->_hp = copy._hp;
	this->_ep = copy._ep;
	this->_ad = copy._ad;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (isDead() || noEnergy())
		return ;
	std::cout << this->_name << " attacks "
			  << target << " causing "
			  << this->_ad << " points of damage" << std::endl;
	if ((int)(this->_ep - 1) < 0 )
		this->_ep -= 0;
	else
		--this->_ep;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (isDead() || noEnergy())
		return ;
	std::cout << this->_name << " takes "
			  << amount<< " points of damage" << std::endl;
	if ((int)(this->_hp - amount) <= 0)
		this->_hp = 0;
	else
		this->_hp -= amount;
	if ((int)(this->_ep - 1) < 0 )
		this->_ep -= 0;
	else
		--this->_ep;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (isDead() || noEnergy())
		return ;
	std::cout << this->_name << " heals "
			  << amount<< " hit points" << std::endl;
	if (this->_hp + amount >= 10)
		this->_hp = 10;
	else
		this->_hp += amount;
	if ((int)(this->_ep - 1) < 0 )
		this->_ep -= 0;
	else
		--this->_ep;
}

bool ClapTrap::isDead() {
	if (this->_hp == 0)
	{
		std::cout << red << "ClapTrap " << reset << this->_name << " is dead" << std::endl;
		return (true);
	}
	return (false);
}

bool ClapTrap::noEnergy() {
	if (this->_ep == 0)
	{
		std::cout << red << "ClapTrap " << reset << this->_name << " is out of energy" << std::endl;
		return (true);
	}
	return (false);
}

const std::string &ClapTrap::getName() const{
	return (this->_name);
}
