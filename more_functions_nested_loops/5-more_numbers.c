#include "main.h"
/**
 * more_numbers - ?
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n;
	int x;

	for (n = 0; n <= 9; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}

		_putchar((x % 10) + '0');

		}
	_putchar('\n');
	}
}
