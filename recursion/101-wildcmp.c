#include "main.h"
#include <string.h>
/**
 * wildcmp - compares two strings to see if they are identical
 * @s1; pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (s1 + 0, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2));
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
