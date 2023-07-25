#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - function that produces output according to a format.
 * @format: character string. Format string is composed of zero or more
 *          directives.
 * Return: the number of characters printed (excluding the null byte used to
 *         end output to strings) or -1 if an error occurs.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	int (*print_func)(va_list);

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			print_func = get_print_func(format[i]);
			if (print_func == NULL)
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
			else
				count += print_func(args);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

