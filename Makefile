# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 16:58:08 by maherraz          #+#    #+#              #
#    Updated: 2026/02/10 05:33:35 by maherraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIB_C_FUNCS = isalpha isdigit isalnum isascii isprint \
			  strlen memset bzero memcpy memmove \
			  strlcpy strlcat toupper tolower strchr \
			  strrchr strncmp memchr memcmp strnstr \
			  atoi calloc strdup

ADDITIONAL_FUNCS = substr strjoin strtrim split \
				   itoa strmapi striteri \
				   putchar_fd putstr_fd putendl_fd putnbr_fd

BONUS_FUNCS = lstnew lstadd_front lstsize lstlast \
			  lstadd_back lstdelone lstclear \
			  lstiter lstmap

MANDATORY_FUNCS = $(LIB_C_FUNCS) $(ADDITIONAL_FUNCS)

MANDATORY_SRCS = $(addprefix ft_, $(addsuffix .c, $(MANDATORY_FUNCS)))
MANDATORY_OBJS = $(MANDATORY_SRCS:.c=.o)

BONUS_SRCS = $(addprefix ft_, $(addsuffix .c, $(BONUS_FUNCS)))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

AR = ar rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(MANDATORY_OBJS)
	$(AR) $(NAME) $(MANDATORY_OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MANDATORY_OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(MANDATORY_OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(MANDATORY_OBJS) $(BONUS_OBJS)

test: all
	@echo "Compilation des tests..."
	$(CC) $(CFLAGS) tests/test_basic.c -L. -lft -o test_basic
	@echo "Exécution des tests basiques..."
	./test_basic

test_bonus: bonus
	@echo "Compilation des tests avec bonus.."
	$(CC) $(CFLAGS) tests/test_bonus.c -L. -lft -o test_bonus
	@echo "Exécution des tests avec bonus..."
	./test_bonus

test_memory: all
	@echo "Compilation des tests de mémoire..."
	$(CC) $(CFLAGS) -g tests/test_memory.c -L. -lft -o test_memory
	@echo "Exécution avec valgrind..."
	valgrind --leak-check=full --show-leak-kinds=all ./test_memory

test_norm:
	@echo "Vérification de la norminette..."
	norminette ft_*.c libft.h

test_all: test test_bonus test_memory test_norm

.PHONY: all clean fclean re bonus test test_bonus test_memory test_norm test_all