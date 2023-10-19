#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_calloc - ?
 *
 * Return: ?
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int counter_1;
	size_t total_size;
	
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	
	total_size = (nmemb * size);
	void *my_array = malloc(total_size);

	if (my_array)
	{
		for (counter_1 = 0; counter_1 < total_size; counter_1++)
		{
			((char *)my_array)[counter_1] = 0;
		}
		return (my_array);
	}
	else 
		return (NULL);
}
