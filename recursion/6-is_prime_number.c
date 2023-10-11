#include "main.h"
/**
 * is_prime_number - tests an inputted number and checks if it is prime
 * @n: checking if inputted number is prime
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int divider = 2;

	if (n % divider == 0)
	{
		return (0);
	}
	else if (divider <= n - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (is_prime_number(n));
}
