/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:34:13 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/03 14:09:45 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Data structure

struct Data
{
		std::string		data_name;
		int				data_nb;
};

// unsigned int that is capable of storing data pointer, same size as a pointer

uintptr_t 		serialize(Data *ptr)
{
	std::cout << "-------------" << std::endl;
	std::cout << "serialize .." << std::endl;

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data			*deserialize(uintptr_t raw)
{
	std::cout << "-------------" << std::endl;
	std::cout << "deserialize .." << std::endl;

	return (reinterpret_cast<Data *>(raw));
}

int				main()
{
	Data	*random = new Data;

	random->data_name = "random data";
	random->data_nb = 12345;

	std::cout << "data name= " << random->data_name << std::endl;
	std::cout << "data number= " << random->data_nb << std::endl;

	uintptr_t test = serialize(random);
	std::cout << "uintptr = " << test << std::endl;

	Data	*d = deserialize(test);
	std::cout << "data name= " << d->data_name << std::endl;
	std::cout << "data number= " << d->data_nb << std::endl;

	delete random;

}