/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:45:37 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 17:56:23 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>

# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon& weapon);
		~HumanB();

		void	attack(void) const;
		void	setWeapon(Weapon& weapon);
};

#endif
