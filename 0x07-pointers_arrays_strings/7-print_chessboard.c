#include "main.h"
/**
 * print_board - Entry point
 * @board: array
 * Return: Always 0 (Success)
 */
void print_board(char (*board)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(board[row][col]);
		_putchar('\n');
	}
}
