#include "main.h"
#include <unistd.h>
/**
*The function takes a single parameter, c, which is the character to be written to stdout. It returns an integer value indicating whether the operation was successful or not.
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
