/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:12:18 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 18:48:49 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av) {
	if (ac != 4)
		return (EXIT_FAILURE);

	std::string	s1 = av[2];

	std::string	out = av[1];
	out += ".replace";

	std::ifstream	ifs(av[1], std::ifstream::in);
	std::ofstream	ofs(out, std::ofstream::out);

	if (ifs.fail() || ofs.fail())
		return (EXIT_FAILURE);

	std::string	ss;
	std::getline(ifs, ss, '\0');

	ifs.close();

	std::size_t	n = 0;

	while ((n = ss.find(av[2])) != std::string::npos) {
		ss.erase(n, s1.size());
		ss.insert(n, av[3]);
	}

	ofs << ss;
	ofs.close();
}
