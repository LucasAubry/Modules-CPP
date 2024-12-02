/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:45:21 by laubry            #+#    #+#             */
/*   Updated: 2024/11/25 14:36:10 by laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main(int argc ,char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *";
	else
	{
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j] != '\0'; j++)
				std::cout << (char) toupper(argv[i][j]);//toupper c > C / C > c
		}
	}
	std::cout << std::endl;
}
