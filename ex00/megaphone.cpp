/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 11:34:51 by adesille          #+#    #+#             */
/*   Updated: 2024/12/22 11:35:03 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (argv[++i])
	{
		int j = -1;
		while (argv[i][++j])
			argv[i][j] = std::toupper(argv[i][j]);
	}
	i = 0;
	while (argv[++i])
		std::cout << argv[i];
	std::cout << "\n";
}
