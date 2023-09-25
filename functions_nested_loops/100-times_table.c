#include "main.h"
/**
 * print_times_table - printing the times table for int n
 *
 * Return: 0
 */
int print_times_table(int n)
{
	int x, y;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			int m = x * y;

			if (m == 0)
			{
				putchar('0');
			}
			else if (m <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(m + '0');
			}
			else
			{
				putchar(',');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
			}
		}
	}

		putchar('\n');

	return (0);
}
