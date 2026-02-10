*This project has been created as part of the 42 curriculum by tolrafan.*

# Libft - Your own C Library

## Description

**Libft** is the first project in the 42 curriculum where students create their own C library from scratch. The goal is to re-implement standard C library functions as well as develop additional utility functions that will be useful throughout the entire curriculum. This project serves as a foundation for all future C projects at 42.

The library is divided into three main parts:
1. **Libc functions** - Reimplementation of standard functions from `<string.h>`, `<ctype.h>`, `<stdlib.h>`, etc.
2. **Additional functions** - Utility functions not in the standard library
3. **Bonus - Linked lists** - Functions to manipulate linked lists using a custom structure

## Detailed Library Description

### Part 1: Libc Functions
This section contains reimplementations of standard C library functions:

**Character classification:**
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

**String manipulation:**
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`
- `ft_strnstr`, `ft_strdup`

**Memory manipulation:**
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_memchr`, `ft_memcmp`

**Conversion functions:**
- `ft_atoi`, `ft_calloc`

### Part 2: Additional Functions
Functions that extend beyond the standard C library:

**String operations:**
- `ft_substr` - extracts a substring
- `ft_strjoin` - concatenates two strings
- `ft_strtrim` - trims specified characters from both ends
- `ft_split` - splits a string using a delimiter character
- `ft_strmapi` - applies a function to each character of a string
- `ft_striteri` - applies a function to each character with index
- `ft_itoa` - converts integer to string

**File descriptor operations:**
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3: Bonus - Linked List Functions
Functions to manipulate singly linked lists using the `t_list` structure:

**List structure:**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;