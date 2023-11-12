#include "main.h"
/**
 * f - ?
 *
 * Return: ?
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	int value;

	if (index <= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if (value == 1)
		*n |= mask;
	else if (value == 0)
		*n &= ~mask;
	else 
		return (-1);

	return (1);
}
