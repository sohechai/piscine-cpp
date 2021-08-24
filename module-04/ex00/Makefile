# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 16:55:15 by sohechai          #+#    #+#              #
#    Updated: 2021/08/23 16:39:05 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		=	./Animal.cpp		\
				./Cat.cpp 			\
				./Dog.cpp 			\
				./WrongAnimal.cpp 	\
				./WrongCat.cpp 		\
				./main.cpp

GCC			= clang++

FLAGS		= -Wall -Werror -Wextra

all:
	clang++ -Wall -Wextra -Werror $(SRCS)

clean:
	@rm -f a.out

re:     clean all

.PHONY: all clean re