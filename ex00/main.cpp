/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:31:20 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 17:01:41 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	ClapTrap c("John");
	ClapTrap g(c);
	ClapTrap p;


	p.attack("Rotclaw");
	p = c;
	g.attack("Spider-man");
	p.attack("Venom");
	c.attack("Dark Willow");
	c.takeDamage(8);
	c.takeDamage(10);
	c.beRepaired(5);
	return (0);
}
