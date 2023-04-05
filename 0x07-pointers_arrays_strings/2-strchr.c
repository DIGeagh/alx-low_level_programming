#include "main.h"
/**
 * _strchr - locates the first occurrence of a character in a string
 * @str: pointer to the string to be searched
 * @ch: the character to be located within the string
 *
 * Return: a pointer to the located character in the string, or NULL if not found
 */
char *_strchr(char *str, char ch)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
    }

    return (0);
}
