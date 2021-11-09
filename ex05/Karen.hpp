/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:50:01 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/09 16:34:09 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <string>

class Karen {
	private:
		void	(Karen::*_levels[4])();

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Karen();
		~Karen();

		void	complain(std::string level);
};

#endif
