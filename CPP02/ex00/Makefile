# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 16:08:17 by akoaik            #+#    #+#              #
#    Updated: 2026/01/15 16:08:53 by akoaik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = fixed

CXX     = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp Fixed.cpp
OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
