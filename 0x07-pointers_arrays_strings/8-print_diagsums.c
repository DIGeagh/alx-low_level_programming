#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @matrix: The matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *matrix, int size)
{
    int sum1 = 0, sum2 = 0, i;

    for (i = 0; i < size; i++)
    {
        sum1 += matrix[i * size + i];
        sum2 += matrix[(i + 1) * size - i - 1];
    }

    printf("%d, %d\n", sum1, sum2);
}
