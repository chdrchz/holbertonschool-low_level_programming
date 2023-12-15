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
	int i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
