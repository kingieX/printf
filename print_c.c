#include "main.h"

/**
 * print_c - prints a character
 * @args: arguments 
 *
 * Return: character printed
 */
int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
