				PRINTF PROJECT CODES
	_PRINTF.C
#include "main.h"
#include <stdlib.h>

/**
 * specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 * Return: pointer to printf function or 0
 */
static int (*specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t point[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; point[i].t != NULL; i++)
	{
		if (*(point[i].t) == *format)
		{
			break;
		}
	}
	return (point[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, result = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			result++;
		}
		if (!format[i])
			return (result);
		f = specifiers(&format[i + 1]);
		if (f != NULL)
		{
			result += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		result++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (result);
}
