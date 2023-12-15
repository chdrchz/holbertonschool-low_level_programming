#include "search_algos.h"
/**
 * binary_search - searches for a value in an array using binary search
 *
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: On Success: 1
 * On Failure: -1
 **/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int mid;
	int high = size - 1;

	if (array == NULL)
		return (-1);
	
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			low = mid + 1;
			printf("Searching in array: %d\n", array[value]);
		}
		else
		{
			high = mid - 1;
			printf("Searching in array: %d\n", array[value]);
		}
	}
	return (-1);
}
