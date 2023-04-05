#include "main.h"
/**
 * _strstr - locates a substring
 * @str: pointer to the string to be searched
 * @substr: pointer to the substring to search for
 *
 * Return: a pointer to the beginning of the substring if found,
 *         or NULL if the substring is not found
 */
char *_strstr(char *str, char *substr)
{
    for (; *str != '\0'; str++)
    {
        char *s = str;
        char *t = substr;

        while (*s == *t && *t != '\0')
        {
            s++;
            t++;
        }

        if (*t == '\0')
            return str;
    }

    return NULL;
}
