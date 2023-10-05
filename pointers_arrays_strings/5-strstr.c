#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * Return: pointer to the beginning of sub, or NULL
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		start = haystack;

		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return start;
		}

		haystack = start + 1;
		needle = needle - (haystack - start);
	}

	return (NULL);
}
