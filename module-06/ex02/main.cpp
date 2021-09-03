/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:21:03 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/03 14:59:40 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base		*generate(void)
{
	Base	*b;
	std::srand(time(NULL));

	int  random = std::rand() % 3 + 1;

	if (random == 1)
		return (b = new A);
	else if (random == 2)
		return (b = new B);
	else
		return (b = new C);
}

void		identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;

	return ;
}

void		identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return ;
}

int main(void)
{
	Base *b = generate();
	std::cout << "identify base ptr= " << std::endl;
	identify(b);

	Base &r = *b;
	std::cout << "identify base ref= " << std::endl;
	identify(r);

	delete (b);

	return (0);
}