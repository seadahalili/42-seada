# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/22 08:27:46 by sehalili          #+#    #+#              #
#    Updated: 2026/02/22 10:56:58 by sehalili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = rush-02.c parse_dict.c parse_dict_fill.c parse_dict_utils.c number_to_words.c utils.c

OBJ = $(SRC:.c=.o)

all:
	cc -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME) *.o

re: fclean all
