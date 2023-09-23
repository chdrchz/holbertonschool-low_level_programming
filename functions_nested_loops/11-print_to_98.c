#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from a starting number
 *
 * Return: all natural numbers
 */
void print_to_98(int x)
{
	if (x >=98)
	{
		while (x > 98)
		{
			printf("%d, ", x--);
		}
		printf("%d\n", x);
	}
	else
	{
		while (x < 98)
		{
			printf("%d, ", x++);
		}
		printf("%d\n", x);
	}
}
