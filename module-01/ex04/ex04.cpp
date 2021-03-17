/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 21:57:35 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 22:09:19 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "pointer : " << *strPtr << std::endl;
	std::cout << "reference : " << strRef << std::endl;

	return (0);
}