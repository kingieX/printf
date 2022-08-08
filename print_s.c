#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to be printed
 *
 * Return: characters printed
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
/**
 * print_s - print string
 * @args: argument
 * Return: string
 */

int print_s(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
