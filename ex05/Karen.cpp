/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:49:53 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 21:01:25 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {}

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

typedef void (Karen::*coso[4])(void);

void	Karen::complain(std::string level) {
	coso	levels;
	std::string	ref[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	levels[0] = &Karen::debug;	// 5
	levels[1] = &Karen::info;	// 4
	levels[2] = &Karen::warning;// 7
	levels[3] = &Karen::error;	// 5

	for (int i = 0; i < 4; i++)
		if (level == ref[i])
			return levels[i]();
}
