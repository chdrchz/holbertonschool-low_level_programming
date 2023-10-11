#include "main.h"
/**
 * is_prime_number - tests an inputted number and checks if it is prime
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int divider = 2;

	if (n % divider == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return(is_prime_number(n));
}
