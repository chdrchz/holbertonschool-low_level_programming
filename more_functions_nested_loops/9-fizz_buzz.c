#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 99; x++)
	{

		if ((x % 3) == 0 && (x % 5) == 0)
                {
                        printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz ");
		}
		else 
		{
			printf("%d ", x);
		}
	}

	printf("Buzz");

	putchar('\n');

	return (0);
}
