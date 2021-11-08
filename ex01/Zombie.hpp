/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:59:56 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 17:07:13 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void	announce(void) const;
		void	setName(std::string &name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
