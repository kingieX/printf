#include "main.h"
#include <stddel.h>

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int print_s(va_list s)
{
	int result;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (result = 0; str[result]; result++)
	{
		_putchar(str[result]);
	}
	return (result);
}
