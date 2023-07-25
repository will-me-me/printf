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
	int i, j, no_c = 0;

	print_d data[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_perc}
	};
	va_start(arg, format);
	if (!format)
		return (-1);
	i = 0;
	while (*(format + i))
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			j = 0;
			while (format[i + 1] != *(data[j].c) && j < 3)
				j++;
			if (j < 3)
			{
				no_c = no_c + data[j].f_pr(arg);
				i++;
			}
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
