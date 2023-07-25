#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct character_print - print data
 * @c: character.
 * @f_pr: function pointer
 */
typedef struct character_print
{
	char *c;
	int (*f_pr)(va_list arg);
} print_d;

/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);

#endif /* MAIN_H */
