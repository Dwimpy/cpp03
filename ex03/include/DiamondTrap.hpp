/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:44:33 by arobu             #+#    #+#             */
/*   Updated: 2023/07/01 16:04:13 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap: public ScavTrap, public FragTrap{
		public:
			DiamondTrap();
			DiamondTrap(std::string name);
			~DiamondTrap();
			DiamondTrap(DiamondTrap const &copy);
			DiamondTrap &operator=(DiamondTrap const &copy);
			void attack(std::string const &target);
			void printAttributes();
			void whoAmI();
			using ScavTrap::attack;
		private:
			const std::string _name;
			unsigned int _dt_hp;
			unsigned int _dt_ep;
			unsigned int _dt_ad;
};
