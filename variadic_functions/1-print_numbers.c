#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: the string used to separate numbers
 * @n: numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	
	va_list args;
	
	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		int j = va_arg(args, int);
		printf("%d%s", j, (i < n - 1) ? separator : "");
	}

	va_end(args);
}
