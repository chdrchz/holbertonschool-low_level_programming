#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	char board[1000] = {"'r'", "'k'", "'b'", "'q'", "'k'", "'b'", "'k'", "'r'",
			"'p'", "'p'", "'p'", "'p'", "'p'", "'p'", "'p'", "'p'",
			"' '", "' '", "' '", "' '", "' '", "' '", "' '", "' '",
			"' '", "' '", "' '", "' '", "' '", "' '", "' '", "' '",
			"' '", "' '", "' '", "' '", "' '", "' '", "' '", "' '",
			"' '", "' '", "' '", "' '", "' '", "' '", "' '", "' '",
			"'p'", "'p'", "'p'", "'p'", "'p'", "'p'", "'p'", "'p'",
			"'r'", "'k'", "'b'", "'q'", "'k'", "'b'", "'k'", "'r'"};
	
	int i;
	char position;
	
	position = sizeof(board)/sizeof(board[0]);

	for (i = 0; i < position; i++)
	{
		_putchar(board[position]);
	}

	return (0);
}
