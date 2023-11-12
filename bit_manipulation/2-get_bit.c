#include "main.h"
/**
 * get_bit - returns a bit at a given index 
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted_num;
	int bit_value;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	shifted_num = n >> index;
	bit_value = shifted_num & 1;

	return (bit_value);
}
