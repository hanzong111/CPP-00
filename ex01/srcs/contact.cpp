/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:05:03 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/25 23:58:26 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{
	
}

std::string	Contact::get_firstname(void)
{
	return(this->firstname);
}

std::string	Contact::get_lastname(void)
{
	return(this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return(this->nickname);
}

std::string	Contact::get_phonenumber(void)
{
	return(this->phonenumber);
}

std::string	Contact::get_darkestsecret(void)
{
	return(this->darkestsecret);
}

void	Contact::set_contact(std::string firstname, std::string lastname,
	std::string nickname, std::string phonenumber, std::string darkestsecret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phonenumber = phonenumber;
	this->darkestsecret = darkestsecret;	
}

void	Contact::print_contact()
{
	std::cout << "First name :" << get_firstname() << std::endl;
	std::cout << "Last name :" << get_lastname() << std::endl;
	std::cout << "Nickname :" << get_nickname() << std::endl;
	std::cout << "Phonenumber :" << get_phonenumber() << std::endl;
	std::cout << "Darkest secret :" << get_darkestsecret() << std::endl;
}