#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Search for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of 'value' in the array,
 * or -1 if the value is not found or the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t step = sqrt(size);
    size_t left = 0;
    size_t right = 0;

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    for (size_t i = left; i < size && i <= right; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i);
    }

    return -1;
}
