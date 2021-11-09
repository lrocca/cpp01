/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:33:32 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/09 17:44:00 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <string>

class Karen {
	private:
		int		_level;
		void	(Karen::*_levels[4])();
		std::string const static	_ref[];

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Karen(std::string level);
		~Karen();

		void	complain(std::string level);
};

#endif
