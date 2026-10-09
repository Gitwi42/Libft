*This project has been created as part of the 42 curriculum by YOUR_42_LOGIN.*

# Libft

**Libft** is a custom C library developed as part of the 42 curriculum. It recreates essential functions from the standard C library and introduces additional utilities that can be reused in future C projects.

The main goal of this project is to gain a deeper understanding of C programming, memory management, pointers, strings, and data structures by implementing these functions from scratch.

## Table of Contents

* [Description](#description)
* [Features](#features)
* [Project Structure](#project-structure)
* [Instructions](#instructions)
* [Library Reference](#library-reference)
* [Resources](#resources)
* [AI Usage](#ai-usage)

## Description

Libft provides a collection of utility functions designed to simplify common programming tasks.

The library covers several fundamental areas of C programming:

* Character classification and conversion
* String manipulation and processing
* Memory manipulation and allocation
* Integer conversion
* Output through file descriptors
* Singly linked list management

The result is a static library, `libft.a`, that can be linked to other C programs.

## Features

* Reimplementation of selected standard C library functions.
* Additional string and conversion utilities.
* Dynamic memory allocation and memory manipulation.
* File descriptor output functions.
* Linked list operations using the `t_list` structure.
* A Makefile for building and cleaning the library.

## Project Structure

```text
libft/
├── libft.h
├── Makefile
├── ft_*.c
└── README.md
```

The source files contain the individual function implementations. The header file, `libft.h`, provides the declarations and linked list structure needed to use the library.

## Instructions

### Requirements

* A C compiler such as `cc` or `gcc`
* GNU Make
* A Unix-like environment

### Compilation

Clone the repository and enter the project directory, then run:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

### Makefile Commands

| Command       | Description                         |
| ------------- | ----------------------------------- |
| `make`        | Builds `libft.a`.                   |
| `make clean`  | Removes object files (`.o`).        |
| `make fclean` | Removes object files and `libft.a`. |
| `make re`     | Rebuilds the library from scratch.  |

### Using the Library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program and link it against `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the resulting executable:

```bash
./program
```

## Library Reference

### Character Functions

| Function     | Description                                        |
| ------------ | -------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is alphabetic.          |
| `ft_isdigit` | Checks whether a character is a decimal digit.     |
| `ft_isalnum` | Checks whether a character is alphanumeric.        |
| `ft_isascii` | Checks whether a value belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable.           |
| `ft_toupper` | Converts a lowercase letter to uppercase.          |
| `ft_tolower` | Converts an uppercase letter to lowercase.         |

### Memory Functions

| Function     | Description                                              |
| ------------ | -------------------------------------------------------- |
| `ft_memset`  | Fills a memory area with a specified byte.               |
| `ft_bzero`   | Sets a memory area to zero.                              |
| `ft_memcpy`  | Copies a specified number of bytes between memory areas. |
| `ft_memmove` | Copies bytes while handling overlapping memory areas.    |
| `ft_memchr`  | Searches for a byte in a memory area.                    |
| `ft_memcmp`  | Compares two memory areas.                               |
| `ft_calloc`  | Allocates memory and initializes it to zero.             |

### String Functions

| Function      | Description                                                          |
| ------------- | -------------------------------------------------------------------- |
| `ft_strlen`   | Calculates the length of a string.                                   |
| `ft_strchr`   | Finds the first occurrence of a character.                           |
| `ft_strrchr`  | Finds the last occurrence of a character.                            |
| `ft_strncmp`  | Compares two strings up to a specified length.                       |
| `ft_strnstr`  | Searches for a substring within a limited portion of a string.       |
| `ft_strdup`   | Creates a dynamically allocated copy of a string.                    |
| `ft_strlcpy`  | Copies a string with a destination size limit.                       |
| `ft_strlcat`  | Concatenates strings with a destination size limit.                  |
| `ft_substr`   | Creates a substring.                                                 |
| `ft_strjoin`  | Concatenates two strings into a new string.                          |
| `ft_strtrim`  | Removes specified characters from the beginning and end of a string. |
| `ft_split`    | Splits a string into an array of strings using a delimiter.          |
| `ft_strmapi`  | Applies a function to each character and returns a new string.       |
| `ft_striteri` | Applies a function to each character in the original string.         |

### Conversion Functions

| Function  | Description                      |
| --------- | -------------------------------- |
| `ft_atoi` | Converts a string to an integer. |
| `ft_itoa` | Converts an integer to a string. |

### File Descriptor Functions

| Function        | Description                              |
| --------------- | ---------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd`  | Writes a string to a file descriptor.    |
| `ft_putendl_fd` | Writes a string followed by a newline.   |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.  |

### Linked List Functions

The library implements a singly linked list using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function          | Description                                                       |
| ----------------- | ----------------------------------------------------------------- |
| `ft_lstnew`       | Creates a new list node.                                          |
| `ft_lstadd_front` | Adds a node at the beginning of a list.                           |
| `ft_lstsize`      | Counts the number of nodes in a list.                             |
| `ft_lstlast`      | Returns the last node of a list.                                  |
| `ft_lstadd_back`  | Adds a node at the end of a list.                                 |
| `ft_lstdelone`    | Deletes one node using a specified deletion function.             |
| `ft_lstclear`     | Deletes all nodes in a list.                                      |
| `ft_lstiter`      | Applies a function to each node's content.                        |
| `ft_lstmap`       | Creates a new list by applying a function to each node's content. |

## Resources

The following resources were used to understand the C language, standard library behavior, and project requirements:

* **C library manual pages:** `man 3` documentation for standard library functions.
* **System call manual pages:** `man 2` documentation for functions such as `write`, `read`, `open`, and `close`, where relevant.
* **42 project subject:** Official Libft requirements and evaluation guidelines.
* **C language references:** Documentation covering pointers, arrays, structures, function pointers, and dynamic memory allocation.

## AI Usage

AI tools were used as a learning and debugging aid throughout the project.

Their use included:

* Explaining C concepts, including pointers, `const` qualifiers, memory allocation, and function pointers.
* Helping interpret compiler errors and warnings.
* Discussing edge cases and memory management.
* Reviewing implementations and identifying potential issues.
* Clarifying the expected behavior of standard library functions.
* Doing the README.md

AI assistance was used to support understanding and debugging. The implementation process remained focused on learning the underlying concepts and writing the functions as part of the 42 curriculum.
