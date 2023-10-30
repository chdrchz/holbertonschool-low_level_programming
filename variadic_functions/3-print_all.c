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
int char_count = 0;
int first_arg = 1;
va_list args;
va_start(args, format);
if (format == NULL)
	printf("\n");
	return;
	while ((c_switch = format[char_count]) != '\0')
	{
		switch(c_switch)
		{
			case 'c':
			{
				printf("%s%c", first_arg ? "" : ", ", va_arg(args, int));
				break;
			}
			case 'i':
			{
				printf("%s%d", first_arg ? "" : ", ", va_arg(args, int));
				break;
			}
			case 'f':
			{
				printf("%s%f", first_arg ? "" : ", ", va_arg(args, double));
				break;
			}
			case 's':
			{
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", first_arg ? "" : ", ", str);
				break;
			}
		}
		first_arg = 0;
		char_count++;
	}
	va_end(args);
	printf("\n");
}
