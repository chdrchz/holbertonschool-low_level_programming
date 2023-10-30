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
	char *str, ch, c_switch;
	int integer;
	double f;
	int char_count = 0;

	va_list args;
	va_start(args, format);

	while ((c_switch = format[char_count]) != '\0')
	{
		switch(c_switch)
		{
			case 'c':
			{
				ch = va_arg(args, int);
				printf("%c, ", ch);
				break;
			}
			case 'i':
			{
				integer = va_arg(args, int);
				printf("%d, ", integer);
				break;
			}
			case 'f': 
			{
				f = va_arg(args, double);
				printf("%f, ", f);
				break;
			}
			case 's': 
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				if (str != NULL)
				{
					printf("%s, ", str);
				}
				break;
			}
			default:
			{
				break;
			}
		}

		char_count++;
	}

	va_end(args);
	printf("\n");
}
