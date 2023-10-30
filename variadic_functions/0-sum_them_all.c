#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all the parameters
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int k = 0;
	
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int j = va_arg(args, int);
		j += k;
	}

	va_end(args);
	return k;
}
