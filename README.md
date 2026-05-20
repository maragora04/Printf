*This project has been created as part of the 42 curriculum by mamendes.*

# ft_printf

## Description

ft_printf is a reimplementation of the standard C `printf` function. The goal of this project is to understand variadic functions and practice handling multiple conversion specifiers, reproducing the core behaviour of the original `printf` from `<stdio.h>`.

Supported conversions:
- `%c` — single character
- `%s` — string
- `%p` — pointer address (hex)
- `%d` / `%i` — signed decimal integer
- `%u` — unsigned decimal integer
- `%x` / `%X` — unsigned hexadecimal (lower/upper case)
- `%%` — literal percent sign

## Instructions

### Requirements

- CC 
- Make
- A Unix-like system (Linux or macOS)

### Compilation

Clone the repository and build the library:

```bash
git clone "42 dot git repo link here" ft_printf
cd ft_printf
make
```

This produces `libftprintf.a`.

### Usage

Link the library when compiling your own project:

```bash
cc -Wall -Werror -Wextra your_file.c libftprintf.a 
./my_program
```

Example:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s! You are %d years old.\n", "world", 42);
}
```

### Makefile rules

| Rule | Description |
|--------|-------------|
| `make` | Build the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the library |
| `make re` | Rebuild everything from scratch |

## Algorithm & Data Structure

ft_printf parses the format string character by character. When it encounters a `%`, it reads the next character to identify the conversion specifier and dispatches to the corresponding handler function via a series of conditionals. Each handler writes its output using `write(1, ...)` and returns the number of bytes written. The total byte count is accumulated and returned, matching the behaviour of the standard `printf`.

No complex data structures are used — the design relies on a single variadic argument list (`va_list`) and simple helper functions, one per conversion type.


## Project Overview

### ft_printf helper functions

| Function | Description |
|--------|-------------|
| `ft_printf` | Parses a format string and processes each conversion specifier, accumulating and returning the total number of bytes written |
| `ft_putchar` | Writes a single character to stdout and returns 1 |
| `ft_puthex` | Recursively converts and writes an unsigned int as a hexadecimal string, in lowercase or uppercase depending on the specifier passed |
| `ft_putnbr` | Recursively converts and writes a signed integer to stdout, handling negative numbers and returning the character count |
| `ft_putstr` | Writes a string to stdout character by character, printing (null) if the pointer is NULL, and returns the number of characters written|
| `ft_putunsigned` | Recursively converts and writes an unsigned integer to stdout and returns the character count |
| `handle_specifier` | Reads the conversion specifier character and dispatches to the appropriate handler function, passing the next variadic argument |

## Resources

- [C `printf` man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C — cppreference](https://en.cppreference.com/w/c/variadic)
- [42 Docs — ft_printf subject](https://cdn.intra.42.fr/pdf/pdf/)
- [Printf deep dive — CS fundamentals](https://www.cs.bu.edu/teaching/c/string/intro/)

### AI Usage

Claude (Anthropic) was used to generate the initial structure of this README based on the project subject requirements.
