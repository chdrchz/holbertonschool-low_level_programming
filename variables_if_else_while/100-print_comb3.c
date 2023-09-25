#include <stdio.h>
/**
 * main - prints every combination of every number.
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for(x = 0; x < 9; x++)
	{
		if (x < 9)
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
	}	

	return (0);
}
