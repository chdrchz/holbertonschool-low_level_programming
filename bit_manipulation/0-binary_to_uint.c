#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		result <<= 1;

		if (b[length] == '1')
			result |= 1;

		length++;
	}
	return (result);
}
