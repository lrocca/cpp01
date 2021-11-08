/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:12:49 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 17:06:31 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define HORDE_SIZE	4

int	main(void) {
	Zombie	*ptr = zombieHorde(HORDE_SIZE, "pippo");

	for (int i = 0; i < HORDE_SIZE; i++)
		ptr[i].announce();

	delete [] ptr;
}
