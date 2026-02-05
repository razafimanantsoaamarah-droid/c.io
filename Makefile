# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 16:58:08 by maherraz          #+#    #+#              #
#    Updated: 2026/01/25 05:46:21 by maherraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INC_DIR = includes
BUILD_DIR = build

STRING_FUNCS = strlen strchr strrchr strncmp strnstr strlcat strdup \
               strlcpy

MEMORY_FUNCS = memset bzero memcpy memmove memchr memcmp calloc

CTYPE_FUNCS = isalpha isdigit isalnum isascii isprint toupper tolower

CONVERSION_FUNCS = atoi

PUT_FUNCS = 

LIST_FUNCS = 

STRING_SRCS = $(addsuffix .c, $(addprefix ft_, $(STRING_FUNCS)))
MEMORY_SRCS = $(addsuffix .c, $(addprefix ft_, $(MEMORY_FUNCS)))
CTYPE_SRCS = $(addsuffix .c, $(addprefix ft_, $(CTYPE_FUNCS)))
CONVERSION_SRCS = $(addsuffix .c, $(addprefix ft_, $(CONVERSION_FUNCS)))
PUT_SRCS = $(addsuffix .c, $(addprefix ft_, $(PUT_FUNCS)))
LIST_SRCS = $(addsuffix .c, $(addprefix ft_, $(LIST_FUNCS)))

SRCS = $(addprefix $(SRC_DIR)/, $(STRING_SRCS)) \
       $(addprefix $(SRC_DIR)/, $(MEMORY_SRCS)) \
       $(addprefix $(SRC_DIR)/, $(CTYPE_SRCS)) \
       $(addprefix $(SRC_DIR)/, $(CONVERSION_SRCS)) \
       $(addprefix $(SRC_DIR)/, $(PUT_SRCS)) \
       $(addprefix $(SRC_DIR)/, $(LIST_SRCS))

OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

AR = ar rcs
NAME = libft.a

$(shell mkdir -p $(BUILD_DIR))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re