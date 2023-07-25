#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_handler - struct for printing
 * @id: type of argument
 * @print_func: function to print
 */
typedef struct print_handler
{
	char id;
	int (*print_func)(va_list args);
} print_handler_t;

int _printf(const char *format, ...);

int (*get_print_func(char id))(va_list);

/*int _putchar(int ch);*/

int print_char(va_list args);

int print_string(va_list args);

int print_binary(va_list args);
int convert_to_binary(unsigned int n, int *count);

int print_decimal(va_list args);
int convert_to_decimal(int n, int *count);
int _putchar(char ch);
int print_unsigned_int(va_list args);
int convert_to_unsigned_int(unsigned int n, int *count);

int print_octal(va_list args);
int convert_to_octal(unsigned int n, int *count);

int print_hex(va_list args);
int convert_to_hex(unsigned int n, int *count);

int print_hex_upper(va_list args);
int convert_to_hex_upper(unsigned int n, int *count);

int get_base_length(int num, int base);

int print_non_printable(va_list args);

int print_reverse(va_list args);
int get_string_length(char *s);

int print_rot13(va_list args);

int print_pointer(va_list args);
int convert_to_memory_address(unsigned long int n, int *pointer);

#endif
