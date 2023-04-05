#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @str_ptr: pointer to pointer to a char
 * @str: pointer to char
 */

void set_string(char **str_ptr, char *str)
{
	*str_ptr = str;
}
