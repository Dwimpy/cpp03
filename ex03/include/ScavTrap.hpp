/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:04:23 by arobu             #+#    #+#             */
/*   Updated: 2023/06/26 18:05:45 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {
		protected:
			unsigned int _st_hp;
			unsigned int _st_ep;
			unsigned int _st_ad;
		public:
			ScavTrap(void);
			~ScavTrap();
			ScavTrap(ScavTrap const &copy);
			ScavTrap	&operator=(ScavTrap const &copy);
			void	guardGate();
			void	printAttributes();
			void	attack(std::string const &target);
		private:
			bool	_guard_gate;
};
