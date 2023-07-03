/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:28:37 by arobu             #+#    #+#             */
/*   Updated: 2023/07/03 14:44:25 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

const std::string red = "\033[31m";
const std::string green = "\033[32m";
const std::string blue = "\033[34m";
const std::string reset = "\033[0m";

class ClapTrap{
		public:
			ClapTrap();
			ClapTrap(std::string name);
			~ClapTrap();
			ClapTrap(ClapTrap const &copy);
			ClapTrap &operator=(ClapTrap const &copy);
			const std::string &getName() const;
			void attack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			bool isDead();
			bool noEnergy();
		private:
			const std::string _name;
			unsigned int _hp;
			unsigned int _ep;
			unsigned int _ad;

};
