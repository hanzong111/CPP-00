/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:15:35 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/04/13 15:36:56 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
}

Phonebook::~Phonebook()
{

}

int		check_space_tabs(const char	*buffer)
{
	int	i;

	i = 0;
	while(buffer[i] == '\t' || buffer[i] == ' ')
		i++;
	if (buffer[i] == '\0')
		return (1);
	else
		return (0);
}

void	get_data(std::string *buffer)
{
	while (1)
	{
		if (std::getline(std::cin, *buffer).eof())
		{
			std::cout << std::endl;
			std::exit(0);
		}
		if (!buffer->empty())
		{
			if (check_space_tabs(buffer->c_str()))
				std::cout << "Field can't be empty :";
			else
				break;
		}
		else
			std::cout << "Field can't be empty :";
	}
}

void	Phonebook::add_contact(void)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;

	std::cout << "Enter Firstname : ";
	get_data(&firstname);
	std::cout << "Enter Lastname : ";
	get_data(&lastname);
	std::cout << "Enter Nickname : ";
	get_data(&nickname);
	std::cout << "Enter Phonenumber : ";
	get_data(&phonenumber);
	std::cout << "Enter Darkestsecret : ";
	get_data(&darkestsecret);
	contacts[index].set_contact(firstname, lastname,
		nickname, phonenumber, darkestsecret);
	index = (index + 1) % 8;
}

void	Phonebook::print_phonebook(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1 << "|";
		if (contacts[i].get_firstname().length() <= 10)
			std::cout << std::setw(10) << std::right << contacts[i].get_firstname();
		else
			std::cout << contacts[i].get_firstname().substr(0, 9) << ".";
		std::cout << "|";
		if (contacts[i].get_lastname().length() <= 10)
			std::cout << std::setw(10) << std::right << contacts[i].get_lastname();
		else
			std::cout << contacts[i].get_lastname().substr(0, 9) << ".";
		std::cout << "|";
		if (contacts[i].get_nickname().length() <= 10)
			std::cout << std::setw(10) << std::right << contacts[i].get_nickname();
		else
			std::cout << contacts[i].get_nickname().substr(0, 9) << ".";
		std::cout << "|" << std::endl;
	}
}

void	Phonebook::search_contact(void)
{
	std::string	index;

	std::cout << "|   Index  |First name|Last name | Nickname |" << std::endl;
	print_phonebook();
	while (1)
	{
		std::cout << "Please key in index of person to display :";
		if (std::getline(std::cin, index).eof())
		{
			std::cout << "getline Error !" << std::endl;
			std::exit(0);
		}
		if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
		{
			if (contacts[index[0] - '0' - 1].get_firstname().empty())
				std::cout << "Empty Index !" << std::endl;
			else
				break ;
		}
		else
			std::cout << "PLease key in a valid index !" << std::endl;
	}
	contacts[index[0] - '0' - 1].print_contact();
}