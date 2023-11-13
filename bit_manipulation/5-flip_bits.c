#include "main.h"
/**
 * flip_bits - returns the number of bits needed to get from numbers
 * @n: number 1 
 * @m: number 2
 * Return: number of bits to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count = 0;

	result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);

}
