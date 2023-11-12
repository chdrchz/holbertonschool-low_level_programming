#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointer to  bit
 * @index: index to change value of bit
 * Return: On success: 1
 * On failure: -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);

	*n &= mask;

	return (1);
}
