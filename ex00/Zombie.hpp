/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:59:56 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/07 22:15:04 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
