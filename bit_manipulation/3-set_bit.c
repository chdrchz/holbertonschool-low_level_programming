#include "main.h"
/**
 * f - ?
 *
 * Return: ?
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	static int value = 0;
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
