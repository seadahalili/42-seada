# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/24 10:26:24 by sehalili          #+#    #+#              #
#    Updated: 2026/02/24 19:50:55 by sehalili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRC = ft_tail.c utils.c read_utils.c
OBJ = $(SRC:.c=.o)

all:
	cc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all