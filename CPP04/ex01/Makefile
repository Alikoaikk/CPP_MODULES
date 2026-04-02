# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 18:15:50 by akoaik            #+#    #+#              #
#    Updated: 2026/01/30 18:15:51 by akoaik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
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
