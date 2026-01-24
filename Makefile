CC=gcc
CFLAGS=-Wall -Wextra -Werror
AR=ar rcs
NAME=libft.a
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
INC=-I includes
VPATH=srcs/
.PHONY: all clean fclean re
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $@ $^
%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
