/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:27:09 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/09 16:59:40 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Karen.hpp"

const std::string Karen::_ref[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Karen::Karen(std::string level): _level(-1) {
	_levels[0] = &Karen::debug;
	_levels[1] = &Karen::info;
	_levels[2] = &Karen::warning;
	_levels[3] = &Karen::error;

	for (int i = 0; i < 4; i++)
		if (level == _ref[i]) {
			_level = i;
			break ;
		}
}

Karen::~Karen() {}

void	Karen::debug(void) {
				std::cout	<< "[ DEBUG ]"
	<< std::endl
				<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< std::endl
				<< "I just love it!"
				<< std::endl
				<< std::endl;
}

void	Karen::info(void) {
	std::cout	<< "[ INFO ]"
				<< std::endl
				<< "I cannot believe adding extra bacon cost more money."
				<< std::endl
				<< "You don’t put enough! If you did I would not have to ask for it!"
				<< std::endl
				<< std::endl;
}

void	Karen::warning(void) {
	std::cout	<< "[ WARNING ]"
				<< std::endl
				<< "I think I deserve to have some extra bacon for free."
				<< std::endl
				<< "I’ve been coming here for years and you just started working here last month."
				<< std::endl
				<< std::endl;
}

void	Karen::error(void) {
	std::cout	<< "[ ERROR ]"
				<< std::endl
				<< "This is unacceptable, I want to speak to the manager now."
				<< std::endl
				<< std::endl;
}

void	Karen::complain(std::string level) {
	if (_level < 0) {
		std::cout	<< "[ Probably complaining about insignificant problems ]"
					<< std::endl
					<< std::endl;
		return ;
	}

	for (int i = _level; i < 4; i++)
		if (level == _ref[i])
			return (this->*(_levels[i]))();
}
