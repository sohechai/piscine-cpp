/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:33:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/15 14:11:36 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>

void		ft_megaphone(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return ;
}

int			main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		ft_megaphone(argc, argv);
	return 0;
}
