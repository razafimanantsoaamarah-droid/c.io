# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 16:58:08 by maherraz          #+#    #+#              #
#    Updated: 2026/01/25 05:16:04 by maherraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS= -Wall -Wextra -Werror
SRCS=srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_isalnum.c srcs/ft_isascii.c \
	srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_memchr.c srcs/ft_memcmp.c \
	srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_strchr.c \
	srcs/ft_strncmp.c srcs/ft_strnstr.c srcs/ft_strlen.c srcs/ft_strlcat.c \
	srcs/ft_strlcpy.c
OBJS=$(SRCS:.c=.o)
AR=ar rcs
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
