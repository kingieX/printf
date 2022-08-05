# _printf
Hello, welcome to our first group project, we are replicating printf() functions from the C standard Library.
### version 1.0

## Introduction to the project
Project _printf() - Produce output to the stdout according to a format described below similar to the printf() function.
## Environment
* Language: C
* Editor: Emacs 11.0
* Compiler: gcc 9.3.0
* Wall -Warrior -Wextra -pedantic -std=gnu89
* Style guildelines: Betty style

## Project Specification
* Not allowed to use global variables
* No more than 5 functions per file
* All files end with a new line

### Specifiers
Specifier characters at the end define the type and the interpretation of its corresponding argument.
| Specifier  | Output 	  |
| ---------  | ---------- |
| `c`	     | character  |
| `s`	     |  string	  |
| `d` or `i` | Signer int |
| `%`        | %	  |

## Repository files
|  	File	       |	Description	|
| -------------------  | ---------------------	|
| README.md	       | this file		|
| _putchar.c	       | putchar function	|
| get_function.c       | get_function function	|
| main.h 	       | header file  		|
| print_char.c         | print_char function	|
| print_digit.c        | print_digit function	|
| print_string.c       | print_string function	|
| printf.c	       | main function		|
| man_3_printf	       | man page		|
| printf_flowchart.png | flowchart_printf	|

## Compilation
`gcc -Wall -Werrior -Wextra -pedantic -std=gnu89 *.c`

# Examples
* _printf function examples
* _printf("Charcter:[%c]\n", 'H');
	* Output: Char:[H]
* _printf("String:[%s]\n", "I am a string!");
  	* Output: String: [I am a string!]
* _printf("Decimal: [%d]\n", 1000);
  	* Output: Decimal: [1000]
* _printf("Percent: [%%]\n");
  	* Output: Percent: [%%]

# Flowchart
Created by Ograh Joshua & KingieX


