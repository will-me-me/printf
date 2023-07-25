#include "main.h"

/**
 * print_char - print char
 * @arg: argument
 *
 * Return: 0 if successful
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - print string
 * @arg: argument
 *
 * Return: a - 1 the number of characters in string.
 */
int print_string(va_list arg)
{
	int a = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}

	return (a);
}

