/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:45:33 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/16 20:16:39 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstring>

class		Pony
{
	public:

	Pony();
	Pony(std::string name, std::string color, std::string age);
	~Pony(void);


	private:

	std::string _name;
	std::string _color;
	std::string _age;
	std::string _ability;
};

	Pony	ponyOnTheStack(std::string name, std::string color, std::string age);
	Pony	*ponyOnTheHeap(std::string name, std::string color, std::string age);

#endif
