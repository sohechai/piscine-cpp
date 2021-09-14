/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:22:58 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/14 14:44:05 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <list>
# include <stack>
# include <vector>

template<typename T>

class MutantStack : public std::stack<T>
{
public:
	MutantStack() { std::stack<T>(); }
	MutantStack(MutantStack<T> const &src) { (std::stack<T>(src)); }
	~MutantStack() {}

	MutantStack<T>& 				operator=(MutantStack const &rhs) { this->c = rhs.c; return (*this); }

	typedef							typename std::deque<T>::iterator iterator;

	iterator						begin() { return(this->c.begin()); }
	iterator 						end( void ) { return (this->c.end()); }

};

#endif