#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @str: pointer to the string to be searched
 * @prefix: pointer to the prefix substring
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *str, char *prefix)
{
    unsigned int count = 0;
    int i, j;

    for (i = 0; str[i]; i++)
    {
        for (j = 0; prefix[j]; j++)
        {
            if (str[i] == prefix[j])
            {
                count++;
                break;
            }
        }
        if (!prefix[j])
        {
            break;
        }
    }

    return count;
}
