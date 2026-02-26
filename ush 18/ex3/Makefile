# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/24 20:06:35 by sehalili          #+#    #+#              #
#    Updated: 2026/02/24 21:06:28 by sehalili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c print_canonical.c print_default.c hexdump_fd.c open_and_dump.c hexdump_utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re