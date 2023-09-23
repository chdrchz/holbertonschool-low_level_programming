#include "main.h"
/**
 * times_table - this prints the 9 times table 
 * 
 * Return: nothing 
 */
void times_table(void)
{
	int x, n;

	for (x = 0; x <=9; x++) 
	{ 
		for (n = 0; n <= 9; n++) 
		{
			int m = x * n;

			if (m == 0) 
			{ 
				_putchar('0'); 
			} 
			else if (m <= 9) 
			{
				_putchar(m + '0'); 
			}
			else
			{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
		}
	}
}
