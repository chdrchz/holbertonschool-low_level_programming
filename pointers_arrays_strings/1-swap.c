#include "main.h"
/**
 * swap_int - swap pointers
 * @a: variable
 * @b: variable
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
