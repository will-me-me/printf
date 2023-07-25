#include "main.h"


/**
 * get_base_length - return the length of the base
 * @num: number
 * @base: base
 * Return: length of the base
 */
int get_base_length(int num, int base)
{
    int count = 0;

    while (num)
    {
        num /= base;
        count++;
    }
    return (count);
}
