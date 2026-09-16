# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/16 18:53:27 by smedenec          #+#    #+#              #
#    Updated: 2026/09/16 18:53:30 by smedenec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re