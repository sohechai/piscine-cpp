# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:40:20 by sohechai          #+#    #+#              #
#    Updated: 2021/08/23 16:42:26 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		=	./ClapTrap.cpp		\
				./ScavTrap.cpp		\
				./FragTrap.cpp		\
				./DiamondTrap.cpp	\
				./main.cpp

GCC			= clang++

FLAGS		= -Wall -Werror -Wextra

all:
	clang++ -Wall -Wextra -Werror $(SRCS)

clean:
	@rm -f a.out

re:     clean all

.PHONY: all clean re