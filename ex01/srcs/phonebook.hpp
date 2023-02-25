/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:46:07 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/25 23:18:07 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class Phonebook
{
	public :
				Phonebook();
				virtual	~Phonebook();
				void	add_contact();
				void	search_contact();
				void	print_phonebook();

	private:
				Contact	contacts[8];
				int		index;
		
};

#endif