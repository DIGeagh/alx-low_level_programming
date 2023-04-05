#include "main.h"
/**
 *_memcpy - copies a block of memory from a source to a destination
 *@dest: pointer to the destination location where the memory will be copied to
*@src: pointer to the source location from where the memory will be copied from
 *@n: number of bytes to be copied
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
