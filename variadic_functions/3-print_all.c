#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: the format of what to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char c_switch = 0;
	char *str;
	char *separator = "";
	int char_count = 0;

	va_list args;
	va_start(args, format);

	while ((c_switch = format[char_count]) != '\0')
	{
		switch(c_switch)
		{
			case 'c':
			{
				printf("%s%c", separator, va_arg(args, int));
				break;
			}
			case 'i':
			{
				printf("%s%d", separator, va_arg(args, int));
				break;
			}
			case 'f': 
			{
				printf("%s%f", separator, va_arg(args, float));
				break;
			}
			case 's': 
			{
				if (!str)
				{
					str = ("(nil)");
					printf("%s%s", separator, str);
				break;
				}
			}
		}

		separator = ", ";
		char_count++;
	}

	va_end(args);
	printf("\n");
}
