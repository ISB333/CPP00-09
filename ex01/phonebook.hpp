/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb <isb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:50:07 by isb               #+#    #+#             */
/*   Updated: 2024/12/31 10:54:25 by isb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstring>
# include <sstream>
# include <cstdlib>

# define FULL 0
# define TEN_CHAR 1
# define NO_ERROR_CHECK 0
# define ERROR_CHECK 1

class Contact
{
	public:
 	   std::string	first_name;
 	   std::string	last_name;
 	   std::string	nickname;
 	   std::string	phone_nbr;
 	   std::string	darkest_secret;
};

class PhoneBook
{
	public:
		Contact c[8];
		int 	i;
};

std::string     prompt(std::string prompt, bool error_check);
int             stoi(std::string& str);
std::string     to_string(int number);
void            write_contact(std::string str, int size);
void            print_contact(PhoneBook p);

#endif