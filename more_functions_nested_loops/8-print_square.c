#include "main.h"
/**
 * print_square - printing a square based on input
 *
 * Return: 0
 */
void print_square(int size)
{
	int x;
	int s;

	for (x = 0; x < size; x++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
