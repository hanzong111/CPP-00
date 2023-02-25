/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:11:15 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/25 19:10:57 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

int	main(void)
{
	std::string	cmd;
	Phonebook	phonebook;

	std::cout << "1) ADD : Adds a new contact" << std::endl;
	std::cout << "2) SEARCH : Search for a contact" << std::endl;
	std::cout << "3) EXIT : Exits the program" << std::endl;
	while (1)
	{
		std::cout << "Phonebook >";
		if (std::getline(std::cin, cmd).eof())
		{
			std::cout << "Cmd not registered" << std::endl;
			break ;
		}
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.search_contact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Pls Enter a valid command" << std::endl;
	}
	return (0);
}