#include "main.h"
/**
 * f - ?
 *
 * Return: ?
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	*n |= mask;

	return (0);
}
