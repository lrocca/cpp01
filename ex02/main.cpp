/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:13:17 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 17:20:53 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout	<< &str << std::endl
				<< stringPTR << std::endl
				<< &stringREF << std::endl;

	std::cout	<< *stringPTR << std::endl
				<< stringREF << std::endl;
}
