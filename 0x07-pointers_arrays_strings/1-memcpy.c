#include "main.h"
/**
 * _memcpy - copies a block of memory from a source to a destination
 * @dest: pointer to the destination location where the memory will be copied to
 * @src: pointer to the source location from where the memory will be copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the destination location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}
