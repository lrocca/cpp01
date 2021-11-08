/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:26:18 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 17:57:14 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon();

		void			setType(std::string type);
		std::string&	getType(void);
};

#endif
