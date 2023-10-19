#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - ?
 *
 * Return: ?
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int counter_1;
	
	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	
	void *my_array = malloc(sizeof(nmemb) * size);

	if (my_array)
	{
		for (counter_1 = 0; counter_1 < size; counter_1++)
		{
			my_array[counter_1] = nmemb;
		}
		return (my_array);
	}
	else 
		return (NULL);
}
