/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:29:50 by arobu             #+#    #+#             */
/*   Updated: 2023/06/30 13:29:52 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap("Froggy") {
	this->_hp = ClapTrap::_hp;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << this->getName() << green << " FragTrap " << reset << "created." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->getName() << green << " FragTrap " << reset << "destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy){}

FragTrap &FragTrap::operator=(const FragTrap &copy) {
	if (this != &copy)
		*this = copy;
	return (*this);
}

void FragTrap::highFiveGuys() {
	if (this->isDead() || this->noEnergy())
		return ;
	std::cout << green << "FragTrap " << reset << this->getName()
			  << " is requesting positive high fives" << std::endl;
	if ((int)(this->_ep - 1) < 0)
		this->_ep = 0;
	else
		this->_ep -= 1;
}

void	FragTrap::attack(std::string const &target){
	if (this->isDead() || this->noEnergy())
		return ;
	std::cout << green << "FragTrap " << reset << this->getName()
			  << " attacks " << target
			  << " causing " << this->_ad
			  << " points of damage." << std::endl;
	if ((int)(this->_ep - 1) < 0)
		this->_ep = 0;
	else
		this->_ep -= 1;
}