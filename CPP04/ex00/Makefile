# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/28 20:45:56 by akoaik            #+#    #+#              #
#    Updated: 2026/01/28 23:09:35 by akoaik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
