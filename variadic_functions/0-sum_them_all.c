#include "variadic_functions"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all the parameters
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	unsigned int i;
	unsigned int k = 0;

	for (i = 0; i < n; i++)
	{
		int j = va_args(n, int)
		j += k;
	}

	va_end(args);
	return k;
}
