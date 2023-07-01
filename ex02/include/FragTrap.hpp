/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobu <arobu@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:29:44 by arobu             #+#    #+#             */
/*   Updated: 2023/06/30 13:29:45 by arobu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
		public:
			FragTrap();
			~FragTrap();
			FragTrap(FragTrap const &copy);
			FragTrap &operator=(FragTrap const &copy);
			void attack(std::string const &target);
			void highFiveGuys(void);

};
