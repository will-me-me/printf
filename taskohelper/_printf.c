#include "main.h"

/**
 * _printf - function to replicate printf
 * @format: format to be printed.
 *
 * Return: 0 if successful.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, no_c = 0;

	print_d data[] = {
		{"c", print_char},
		{"s", print_string}
	};
	va_start(arg, format);
	if (!format)
		return (-1);
	i = 0;
	while (format && *(format + i))
	{
		if (format[i] == '%' && (!format[i + 1] || format[i + 1] == ' '))
			return (-1);
		else if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			no_c = no_c + data[0].f_pr(arg);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			no_c = no_c + data[1].f_pr(arg);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == '%')
		{
			no_c = no_c + _putchar('%');
			i++;
		}
		else
		{
			_putchar(*(format + i));
			no_c++;
		}
		i++;
	}
	va_end(arg);
	return (no_c);
}
