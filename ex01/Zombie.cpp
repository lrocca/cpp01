/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:01:09 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/09 17:06:08 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(): _name("zombie") {}

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie() {
	std::cout << "<" << _name << "> Going back to my grave!" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string &name) {
	_name = name;
}
