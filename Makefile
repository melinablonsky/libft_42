# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblonsky <mblonsky@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 12:25:57 by mblonsky          #+#    #+#              #
#    Updated: 2023/11/15 12:36:14 by mblonsky         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIB = libft.h
RM = rm -f
CC = gcc
AR = ar -rcs
CFLAGS = -Wall -Wexra -Werror
SRC = (funciones)

OBJS = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
bonus: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
	.PHONY: all clean fclean re bonus
