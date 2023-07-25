#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - print a char
 * @args: va_list
 * Return: int
 */
int print_char(va_list args)
{
	char cha = va_arg(args, int);

	return (_putchar(cha));
}

