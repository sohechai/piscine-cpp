/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:22:41 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/13 22:37:01 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(7);

	std::cout << "stack top = " << mstack.top() << std::endl;

	mstack.pop(); // remove 1st element

	std::cout << "stack size = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it = " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "==================" << std::endl;

	MutantStack<std::string>	s1;
	MutantStack<std::string>	s2;

	s1.push("1");
	s1.push("2");
	s1.push("3");

	s2.push("a");
	s2.push("b");
	s2.push("c");

	MutantStack<std::string>::iterator its1 = s1.begin();
	MutantStack<std::string>::iterator ites1 = s1.end();

	while (its1 != ites1)
	{
		std::cout << "s1 = " << *its1 << std::endl;
		++its1;
	}

	MutantStack<std::string>::iterator its2 = s2.begin();
	MutantStack<std::string>::iterator ites2 = s2.end();

	while (its2 != ites2)
	{
		std::cout << "s2 = " << *its2 << std::endl;
		++its2;
	}

	s1.swap(s2);

	std::cout << "-------------" << std::endl << "swap s1 / s2" << std::endl << "-------------" << std::endl;

	MutantStack<std::string>::iterator itss1 = s1.begin();
	MutantStack<std::string>::iterator itess1 = s1.end();

	while (itss1 != itess1)
	{
		std::cout << "s1 = " << *itss1 << std::endl;
		++itss1;
	}

	MutantStack<std::string>::iterator itss2 = s2.begin();
	MutantStack<std::string>::iterator itess2 = s2.end();

	while (itss2 != itess2)
	{
		std::cout << "s2 = " << *itss2 << std::endl;
		++itss2;
	}

	return (0);
}