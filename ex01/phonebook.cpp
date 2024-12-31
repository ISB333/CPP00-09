/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb <isb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:34:51 by adesille          #+#    #+#             */
/*   Updated: 2024/12/31 10:53:11 by isb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	find_contact(PhoneBook *p)
{
	std::string index;
	int			i;

	print_contact(*p);
	index = prompt("Enter the index of the contact you want to display: ", NO_ERROR_CHECK);
	if (!index[1] && std::isdigit(index[0]))
	{
		i = stoi(index) - 1;
		write_contact((*p).c[i].first_name, FULL);
		write_contact((*p).c[i].last_name, FULL);
		write_contact((*p).c[i].nickname, FULL);
		write_contact((*p).c[i].phone_nbr, FULL);
		write_contact((*p).c[i].darkest_secret, FULL);
		std::cout << " |" << std::endl;
	}
	else
		std::cout << "Index is not valid" << std::endl;
}

void	add_contact(PhoneBook *p)
{
	if ((*p).i == 7)
		(*p).i = -1;
	(*p).c[++(*p).i].first_name = prompt("First name: ", ERROR_CHECK);
	(*p).c[(*p).i].last_name = prompt("Last name: ", ERROR_CHECK);
	(*p).c[(*p).i].nickname = prompt("Nickname: ", ERROR_CHECK);
	(*p).c[(*p).i].phone_nbr = prompt("Phone number: ", ERROR_CHECK);
	(*p).c[(*p).i].darkest_secret = prompt("Darkest secret: ", ERROR_CHECK);
}

int main()
{
	std::string	cmd;
	PhoneBook 	p;

	p.i = -1;
	cmd = prompt("Enter your command: ", NO_ERROR_CHECK);
	while (cmd != "EXIT" && !cmd.empty())
	{
		if (cmd == "ADD")
			add_contact(&p);
		else if (cmd == "SEARCH")
			find_contact(&p);
		else if (cmd == "EXIT")
			exit(EXIT_SUCCESS);
		cmd = prompt("Enter your command: ", NO_ERROR_CHECK);
	}
}
