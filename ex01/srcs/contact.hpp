/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:51:02 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/04/13 14:23:50 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
	public :
				Contact();
				virtual			~Contact();
				void			set_contact(std::string firstname, std::string lastname,
								std::string nickname, std::string phonenumber,
								std::string darkestsecret);
				void			print_contact();
				std::string		get_firstname();
				std::string		get_lastname();
				std::string		get_nickname();
				std::string		get_phonenumber();
				std::string		get_darkestsecret();

	private :
				std::string		firstname;
				std::string		lastname;
				std::string		nickname;
				std::string		phonenumber;
				std::string		darkestsecret;
};
#endif