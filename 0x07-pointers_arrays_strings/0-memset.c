#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @dest: pointer to the starting address of memory to be filled
 * @val: the value to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the filled memory block
 */
char *_memset(char *dest, char val, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = val;
    }

    return dest;
}
