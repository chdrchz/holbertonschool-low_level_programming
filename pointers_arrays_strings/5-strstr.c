#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * Return: pointer to the beginning of sub, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i; 
	int j;

	while (*haystack != '\0')
	{
		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
		{
			return (haystack);
		}
		haystack = haystack + 1;
	}
	return (0);
}
