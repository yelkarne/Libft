*This project has been created as part of the 42 curriculum by beakduma.*

# Libft

## Description

**Libft** is a custom C library built from scratch as the very first project of the 42
core curriculum. Its purpose is to recreate a set of standard `libc` functions and to
add a collection of additional, commonly needed utility functions, in order to have a
personal, reusable toolbox for every future C project at 42.

The library is split into three parts:

- **Part 1 — Libc functions**: reimplementations of standard C library functions
  (character checks, memory manipulation, string manipulation, conversion), all
  prefixed with `ft_` (e.g. `strlen` → `ft_strlen`).
- **Part 2 — Additional functions**: extra string/utility functions that either do not
  exist in the standard `libc` or exist in a different form (`ft_substr`, `ft_strjoin`,
  `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, and the
  `_putX_fd` family of output functions).
- **Part 3 — Linked list**: a minimal singly linked list implementation (`t_list`)
  along with all the classic operations needed to create, add, iterate, map, and free
  nodes (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`,
  `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

All functions strictly follow the behavior described in their respective `man` pages
(for the reimplemented libc functions) and respect the 42 Norm.

## Instructions

### Compilation

Clone the repository and run `make` at the root:

```bash
git clone <repository_url>
cd libft
make
```

This compiles every `ft_*.c` source file with `-Wall -Wextra -Werror` and archives the
resulting object files into `libft.a` using the `ar` command.

### Makefile rules

| Rule      | Description                                              |
|-----------|------------------------------------------------------------|
| `make` / `make all` | Compiles all sources and produces `libft.a`        |
| `make clean`        | Removes all object files                            |
| `make fclean`       | Removes object files **and** `libft.a`               |
| `make re`           | Equivalent to `fclean` followed by `all`              |

### Using the library in another project

1. Copy the `libft` folder into your project.
2. Include the header in your source files:

```c
#include "libft/libft.h"
```

3. Compile your project, linking against the library:

```bash
cc -Wall -Wextra -Werror your_files.c -Llibft -lft -o your_program
```

## Resources

- The `man` pages of the corresponding standard functions (`man 3 <function_name>`),
  used as the reference specification for behavior and edge cases in Part 1.
- The C Programming Language, by Brian W. Kernighan and Dennis M. Ritchie — for memory
  management and pointer arithmetic fundamentals.
- The 42 Norm documentation, used to check indentation, function length, and variable
  declaration rules.
- **AI usage**: An AI assistant (Claude) was used only to help structure and format
  this `README.md` file (headings, tables, wording) after the project's own logic and
  code were designed and written independently. No AI-generated code was used for the
  implementation of the `ft_*` functions themselves, in line with the project's AI
  Instructions.

## Library overview

`libft.a` provides the following functions, grouped by part:

**Part 1 — Libc functions**
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_strlen`,
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`,
`ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`,
`ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`.

**Part 2 — Additional functions**
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`,
`ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

**Part 3 — Linked list (`t_list`)**
`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.
