#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @ptr: pointer to pointer
 * @str: pointer char
 */

void set_string(char **ptr, char *str)
{
	*ptr = str;
}
