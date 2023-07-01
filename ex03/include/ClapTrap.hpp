/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:28:37 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 16:58:26 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

const std::string red = "\033[31m";
const std::string green = "\033[32m";
const std::string blue = "\033[34m";
const std::string magenta = "\033[35m";
const std::string reset = "\033[0m";

class ClapTrap{
		protected:
			unsigned int _hp;
			unsigned int _ep;
			unsigned int _ad;
		public:
			ClapTrap();
			ClapTrap(std::string name);
			~ClapTrap();
			ClapTrap(ClapTrap const &copy);
			ClapTrap &operator=(ClapTrap const &copy);
			std::string const &getName() const;
			void attack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void printAttributes();
			bool isDead();
			bool noEnergy();
		private:
			const std::string _name;
};
