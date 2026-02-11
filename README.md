
# Libft — Your First C Library

*This project has been created as part of the 42 curriculum by tolrafan.*

---

## Overview

**Libft** is the foundational project of the 42 curriculum — your very first step into low-level programming. It’s not just a library; it’s your **personal C toolkit** that you’ll reuse across countless future projects. By reimplementing standard C functions and adding your own utilities, you gain a deep understanding of how C works under the hood.

> **Foundation for everything:** Libft will be your go-to library for all subsequent C projects at 42.

---

## Project Structure

```
libft/
├── libft.h                 # Main header file
├── Makefile               # Compilation rules
├── ft_*.c                # All function sources
├── README.md             # This file
└── (bonus files)
```

---

## What’s Inside?

The library is divided into **three logical parts**, each building on the last.

### **Part 1 — Libc Functions**  
Reimplementation of standard C library functions (from `<string.h>`, `<ctype.h>`, `<stdlib.h>`).

| Category | Functions |
|----------|-----------|
| **Character checks** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| **Character transforms** | `ft_toupper`, `ft_tolower` |
| **String operations** | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| **Memory operations** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| **Conversions** | `ft_atoi`, `ft_calloc` |

### **Part 2 — Additional Functions**  
Useful utilities beyond the standard C library.

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string using a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character (with index) |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string + newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### **Part 3 — Bonus: Linked Lists**  
A set of functions to manipulate singly linked lists.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts nodes in the list |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes one node |
| `ft_lstclear` | Deletes an entire list |
| `ft_lstiter` | Iterates over the list |
| `ft_lstmap` | Applies a function and creates a new list |

---

## Compilation & Usage

### Build the library

```bash
make        # Compile mandatory part
make bonus  # Compile bonus part (linked lists)
make all    # Compile everything
```

### Use in your projects

1. Include the header:
```c
#include "libft.h"
```

2. Compile with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

### Cleanup

```bash
make clean   # Remove object files
make fclean  # Remove object files + library
make re      # Recompile everything from scratch
```

---

## Testing

While no tests are provided, you are **strongly encouraged** to create your own test suite. This will help you during development, peer evaluation, and defense.

Example test structure:
```
tests/
├── test_part1.c
├── test_part2.c
├── test_bonus.c
└── run_tests.sh
```

---

## Resources & References

### Manual Pages (mandatory reading)
- `man 3 string`
- `man 3 ctype`
- `man 3 stdlib`
- `man 3 malloc`

### External Documentation
- [GNU C Library (glibc) documentation](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [C Programming - Wikibooks](https://en.wikibooks.org/wiki/C_Programming)

### AI Usage Statement
This project was developed **without the use of AI for code generation**. All functions were implemented manually to ensure a deep understanding of memory management, pointers, and algorithmic logic — core competencies of the 42 curriculum. AI tools were only used for:
- Checking spelling and grammar in documentation
- Researching edge cases for standard functions
- Formatting this README for better presentation

The reasoning, debugging, and problem-solving were entirely human-driven, in line with 42's philosophy of building strong foundational skills through hands-on practice.

---

## 🎯 Key Learning Objectives

- ✅ **Memory management** with `malloc` and `free`
- ✅ **Pointer manipulation** and array traversal
- ✅ **String and memory function** reimplementation
- ✅ **Linked list** data structure implementation
- ✅ **Makefile** creation and use
- ✅ **Defensive programming** and error handling
- ✅ **Code organization** and header file design

---

## 📄 License

This project is part of the 42 School curriculum. All code is original work unless otherwise referenced. The project is intended for educational purposes.

---

## 👨‍💻 Author

**tolrafan** – 42 Student  
Project completed as part of the core curriculum.

---

> 💡 *Tip: This library will become your best friend in future C projects. Keep it clean, well-tested, and documented!*