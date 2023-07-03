/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:31:20 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 18:06:20 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap c("John");
	ClapTrap p;
	ScavTrap assign;
	ScavTrap scav;
	ScavTrap s(scav);
	FragTrap f;
	DiamondTrap dt;


	dt.printAttributes();
	f.printAttributes();
	s.printAttributes();
	c.printAttributes();
	dt.attack("Big Bad Wolf");
	dt.whoAmI();
	f.attack("Schwarz");
	s.attack("Testerbot");
	scav.attack("Brother");
	p.attack("Rotclaw");
	p = c;
	assign = scav;
	assign.attack("Billyboy");
	assign.guardGate();
	p.attack("Venom");
	c.attack("Dark Willow");
	c.takeDamage(125);
	c.takeDamage(5);
	c.beRepaired(5);
	scav.guardGate();
	scav.guardGate();
	scav.attack("John");
	assign.guardGate();
	f.highFiveGuys();
	return (0);
}
