/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:34:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/20 16:21:54 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *zoo[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            zoo[i] = new Dog;
        else
            zoo[i] = new Cat;
        std::cout << &(zoo[i]) << std::endl;
        std::cout << "_____________________________\n";
    }
    for (int i = 0; i < 10; i++)
        delete zoo[i];
}
