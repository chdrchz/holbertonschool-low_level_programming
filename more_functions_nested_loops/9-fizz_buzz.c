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

	for (x = 0; x < 100; x++)
	{
		if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else 
		{
			printf("%d ", x);
		}
	}
}
