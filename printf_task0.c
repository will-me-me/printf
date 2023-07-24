#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    char c;
    const char *s;

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
                c = (char)va_arg(args, int);
                putchar(c);
                count++;
                break;
            case 's':
                s = va_arg(args, const char *);
                while (*s)
                {
                    putchar(*s);
                    s++;
                    count++;
                }
                break;
            case '%':
                putchar('%');
                count++;
                break;
            default:
                putchar(*format);
                count++;
                break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

