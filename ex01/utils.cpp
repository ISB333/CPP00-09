/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb <isb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:52:55 by isb               #+#    #+#             */
/*   Updated: 2024/12/31 11:01:09 by isb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	prompt(std::string prompt, bool error_check)
{
	std::string cmd;

	std::cout << prompt;
	while (std::getline(std::cin, cmd))
	{
        if (cmd.empty() && error_check)
		{
            std::cout << "This field cannot be empty!" << std::endl;
            std::cout << prompt;
        }
        else if (cmd.empty() && !error_check)
            return (" ");
		else
            return (cmd);
    }
	return (exit(EXIT_SUCCESS), "");
}

int stoi(std::string& str)
{
    std::stringstream	ss(str);
    int					num;

    ss >> num;
    if (ss.fail() || !ss.eof())
        throw (std::invalid_argument("Invalid string for conversion to integer"));
    return (num);
}

std::string to_string(int number)
{
    std::stringstream ss;
    ss << number;
    return (ss.str());
}

void	write_contact(std::string str, int size)
{
	if (size == FULL)
		std::cout << " | ";
	else
		std::cout << '|';
	if (str.length() > 10 && size != FULL)
	{
		std::cout.write(str.c_str(), 9);
		std::cout << '.';
	}
	else
	{
		std::cout << str;
		if (size != FULL)
		{
			int i = 10 - str.length() + 1;
			while (--i)
				std::cout << ' ';
		}
	}
}

void	print_contact(PhoneBook p)
{
	int i = -1;
	
	while (++i < 8)
	{
		write_contact(to_string(i + 1), TEN_CHAR);
		write_contact(p.c[i].first_name, TEN_CHAR);
		write_contact(p.c[i].last_name, TEN_CHAR);
		write_contact(p.c[i].nickname, TEN_CHAR);
		std::cout << '|' << std::endl;
	}
}