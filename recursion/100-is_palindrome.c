#include "main.h"
#include <string.h>

int pal_palindrome(char *start, char *end);
int is_palindrome(char *s);

/**
 * pal_palindrome - determines if the string is a palindrome (helper)
 * @start: pointer to start of the string
 * @end: pointer to end of the string
 * Return: 1 if the string is a palindrome
 */

int pal_palindrome(char *start, char *end)
{
	if (*start != *end)
	{
		return (0);
	}
	if (start >= end)
	{
		return (1);
	}
	return (pal_palindrome(start + 1, end - 1));
}

/**
 * is_palindrome - determines if the string is a palindrome recursively
 * @s: pointer to a string
 * Return: 1 if the string is a palindrome
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	return (pal_palindrome(s, s + len - 1));
}
