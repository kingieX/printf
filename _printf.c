#include "main.h"
/**
 * _printf - prints all request
 * @format: format used
 *
 * Return: characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int result = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					result += print_c(args);
					i += 2;
					break;
				case 's':
					result += print_s(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					result++;
					i += 2;
					break;
				case 'd':
					result += print_d(args);
					i += 2;
					break;
				case 'i':
					result += print_i(args);
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			result++;
		}

		i++;
	}
	va_end(args);
	return (result);
}
