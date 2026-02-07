# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maherraz <maherraz@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 16:58:08 by maherraz          #+#    #+#              #
#    Updated: 2026/02/07 21:05:58 by maherraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

STRING_FUNCS =
MEMORY_FUNCS =
CTYPE_FUNCS = isalpha isdigit isalnum isascii isprint
CONVERSION_FUNCS = tolower, toupper
PUT_FUNCS =

FILES = $(STRING_FUNCS) $(MEMORY_FUNCS) $(CTYPE_FUNCS) $(CONVERSION_FUNCS) $(PUT_FUNCS)
SRCS = $(addprefix ft_, $(addsuffix .c, $(FILES)))
OBJS = $(SRCS:.c=.o)

AR = ar rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
