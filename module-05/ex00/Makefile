# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:45:55 by sohechai          #+#    #+#              #
#    Updated: 2021/09/08 14:22:45 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			= exec

SRC				=		./Bureaucrat.cpp	\
						./main.cpp

OBJ				=       $(SRC:.cpp=.o)

FLAGS			=       -Wall -Wextra -Werror

RM				=		rm -rf

all: $(NAME)

%.o: %.cpp
		clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
		@${RM} ${OBJ}
		@echo "\033[91m\n./$(NAME) and *.o have been deleted\n\n$(NAME) is now clean"

fclean: clean
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean flclean re