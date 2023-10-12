#include "main.h"
/**
 * is_palindrome - determines if the string is a palindrome recursively
 *
 * Return: 1 if the string is a palindrome
 */

int pal_palindrome(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	if (start < end + 1) 
	{
		return (pal_palindrome(s, start + 1, end - 1));
	}
	return (1);
}

int is_palindrome(char *s)
{
	int _str_len = strlen(s);

	if (_str_len == 0)
	{
		return (1);
	}
	return (pal_palindrome(s, 0, _str_len - 1));
}	
