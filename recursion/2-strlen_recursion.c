#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * int _strlen_recursion - returns the length of a string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (s != '\0')
	{
		_strlen_recursion(s + 1);
		printf("%d", s);
	}
	return(s);
}
