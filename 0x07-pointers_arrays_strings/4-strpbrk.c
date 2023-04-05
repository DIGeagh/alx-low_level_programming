#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @str: pointer to the string to be searched
 * @chars: pointer to the set of bytes to search for
 *
 * Return: a pointer to the first occurrence of a character from the set,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *str, char *chars)
{
    int i, j;

    while (*str)
    {
        for (i = 0; chars[i]; i++)
        {
            if (*str == chars[i])
            {
                return str;
            }
        }
        str++;
    }

    return NULL;
}
