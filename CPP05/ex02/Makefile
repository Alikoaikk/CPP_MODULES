# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 16:15:29 by akoaik            #+#    #+#              #
#    Updated: 2026/02/11 21:12:08 by akoaik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Form

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= AForm.cpp  Bureaucrat.cpp  main.cpp  PresidentialPardonForm.cpp  RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re