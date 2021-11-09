/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:44:52 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/09 17:08:52 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::HumanB(std::string name, Weapon& weapon):
	_name(name), _weapon(&weapon) {}

HumanB::~HumanB() {}

void	HumanB::attack(void) const {
	std::cout << _name << " attacks with his " << (*_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}
