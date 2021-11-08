/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:12:49 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 17:05:31 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*ptr;

	ptr = newZombie("stupidone");
	ptr->announce();

	randomChump("stupidotto");

	delete ptr;
}
