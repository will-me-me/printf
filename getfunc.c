#include "main.h"
#include <stdlib.h>

/**
 * get_print_func - returns the correct func or null
 * @id: char
 * Return: function
 */
int (*get_print_func(char id))(va_list)
{
	print_handler_t print_handlers[] = {
		{'c', print_char},
		{'s', print_string},
		{'b', print_binary},
		{'d', print_decimal},
		{'i', print_decimal},
		{'u', print_unsigned_int},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'S', print_non_printable},
		{'r', print_reverse},
		{'R', print_rot13},
		{'p', print_pointer},
		{'\0', NULL}
	};
	int i = 0;

	while (print_handlers[i].id != '\0')
	{
		if (print_handlers[i].id == id)
			return (print_handlers[i].print_func);
		i++;
	}
	return (NULL);
}

