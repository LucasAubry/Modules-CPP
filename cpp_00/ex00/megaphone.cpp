/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:45:21 by laubry            #+#    #+#             */
/*   Updated: 2024/08/30 22:11:41 by laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "cctype"

int	main(int argc ,char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
				std::cout << (char)toupper(argv[i][j]) << std::endl;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *" << std::endl;
	return (0);
}
