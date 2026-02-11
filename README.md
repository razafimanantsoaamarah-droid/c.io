
```markdown
*This project has been created as part of the 42 curriculum by maherraz.*

# Libft — Your First C Library

---

## Description

**Libft** is the foundational project of the 42 curriculum — a reimplementation of standard C 
library functions alongside custom utilities. This library serves as a personal toolkit for 
all subsequent C projects at 42, providing reliable, well-tested functions for string 
manipulation, memory management, and input/output operations.

The project demonstrates:
- Deep understanding of C standard library internals
- Proper memory allocation and deallocation
- Defensive programming and edge case handling
- Clean, norm-compliant code organization

---

## Library Contents

### Part 1 — Libc Functions
Reimplementations of standard C library functions with identical behavior and prototypes.

| Category                   | Functions                                                                                                   |
|----------------------------|-------------------------------------------------------------------------------------------------------------|
| **Character checks**       | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`                                        |
| **Character transforms**   | `ft_toupper`, `ft_tolower`                                                                                  |
| **String operations**      | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| **Memory operations**      | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`                                |
| **Conversions/Allocation** | `ft_atoi`, `ft_calloc`                                                                                      |

### Part 2 — Additional Functions
Custom utilities that extend beyond the standard library.

| Function        | Description                                                  |
|-----------------|--------------------------------------------------------------|
| `ft_substr`     | Allocates and returns a substring from a given string        |
| `ft_strjoin`    | Concatenates two strings into a new allocation               |
| `ft_strtrim`    | Removes specified characters from both ends of a string      |
| `ft_split`      | Splits a string into an array of words using a delimiter     |
| `ft_itoa`       | Converts an integer to a null-terminated string              |
| `ft_strmapi`    | Applies a function to each character, creating a new string  |
| `ft_striteri`   | Applies a function to each character (in-place modification) |
| `ft_putchar_fd` | Writes a character to a file descriptor                      |
| `ft_putstr_fd`  | Writes a string to a file descriptor                         |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor   |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor                       |

---

## Project Structure

    ```
    .
    ├── libft.h                 # Header with all function prototypes
    ├── Makefile               # Compilation rules
    ├── ft_*.c                # 42 source files (one function per file)
    ├── README.md             # This documentation
    ```

---

## Instructions

### Prerequisites
- GCC or Clang compiler
- GNU Make
- Norminette (for code style verification)

### Compilation

```bash
# Build the library (mandatory part only)
make

# Clean object files
make clean

# Full clean (objects + library)
make fclean

# Rebuild from scratch
make re
```

The output will be `libft.a` — a static library ready for linking.

### Integration into Your Projects

1. Copy `libft.a` and `libft.h` to your project directory
2. Include the header:
   ```c
   #include "libft.h"
   ```
3. Link the library during compilation:
   ```bash
   cc -Wall -Wextra -Werror your_program.c libft.a -o your_program
   ```

### Code Style Verification

```bash
norminette ft_*.c libft.h
```

All code strictly follows the 42 Norm (no more than 25 lines per function, 5 functions per file, etc.).

---

## Technical Implementation Details

### Memory Management
- All allocated memory is properly freed on error paths
- `ft_calloc` implements overflow protection using `SIZE_MAX / size` check
- String functions guarantee null-termination when size > 0

### Edge Cases Handled
- Empty strings (`""`) return appropriate empty results
- NULL pointers return NULL where specified
- Zero-length operations are no-ops
- Integer limits (`INT_MIN`, `INT_MAX`) in `ft_itoa` and `ft_atoi`

### Performance Considerations
- `ft_memmove` handles overlapping regions with forward/backward copy
- `ft_split` uses a single pass for counting and allocation
- `ft_strjoin` pre-calculates lengths to avoid reallocation

---

## Testing Strategy

While no test suite is included in the submission, the following approach was used:

1. **Comparative testing**: Results compared against original libc functions
2. **Edge case validation**: Boundary conditions, zero-length, NULL inputs
3. **Memory leak detection**: Valgrind verification for all allocation paths
4. **Stress testing**: Large inputs and repeated allocations

*Recommended testers: libftTester, libft-war-machine, 42-libft-tester*

---

## Resources

### Official Documentation
- [C Standard Library](https://en.cppreference.com/w/c) — cppreference.com
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — glibc documentation
- `man 3` pages for each implemented function

### Recommended Reading
- **"The C Programming Language"** — Kernighan & Ritchie (2nd Edition)
- **"Understanding and Using C Pointers"** — Richard Reese
- **Beej's Guide to C Programming** — https://beej.us/guide/bgc/

### 42 Network Resources
- 42 Intra — Project subject and forums
- Peer-to-peer learning sessions
- Slack community discussions

### AI Usage Disclosure

In accordance with 42's AI policy, this project was developed with the following AI usage boundaries:

**✅ Permitted AI assistance:**
- Formatting and structure of this README.md
- Proofreading and grammar correction
- Researching function specifications and edge cases

**❌ AI was NOT used for:**
- Writing or generating C code
- Debugging or fixing implementation errors
- Designing algorithms or logic
- Generating test cases

All function implementations, memory management logic, and problem-solving were performed manually 
to ensure genuine understanding of C programming concepts. This approach aligns with 42's 
pedagogical philosophy of building strong foundational skills through deliberate practice and 
peer learning.

---

## Learning Outcomes

Through this project, the following competencies were developed:

| Skill                   | Applied In                                            |
|-------------------------|-------------------------------------------------------|
| **Pointer arithmetic**  | All string/memory functions                           |
| **Dynamic allocation**  | `calloc`, `strdup`, `substr`, `join`, `split`, `itoa` |
| **Algorithm design**    | `split` parsing, `itoa` conversion                    |
| **Error handling**      | Allocation failures, NULL checks                      |
| **Makefile automation** | Compilation rules, dependency tracking                |
| **Code organization**   | Header files, static helper functions                 |

---

## Author

**maherraz** — 42 Student  
Project completed: February 2026  
---

## Acknowledgments

- 42 School for the rigorous curriculum
- Fellow students for peer reviews and collaborative debugging
- The open-source C community for extensive documentation

---

*This project is part of the 42 core curriculum and is not intended for commercial use.*