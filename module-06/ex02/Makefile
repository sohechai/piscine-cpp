# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 16:55:15 by sohechai          #+#    #+#              #
#    Updated: 2021/09/03 15:00:16 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			= exec

SRC				=		./Base.cpp\
						./A.cpp\
						./B.cpp\
						./C.cpp\
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