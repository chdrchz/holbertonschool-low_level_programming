#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of sub, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *bHaystack;
	char *bNeedle;

	while (*haystack != '\0')
	{
		bHaystack = haystack;
		bNeedle = needle;

		while (*haystack != '\0' && *bNeedle != '\0' && *haystack == *bNeedle)
		{
			haystack++;
			bNeedle++;
		}

		if (!*bNeedle)
		{
			return (bHaystack);
		}

		haystack = bHaystack + 1;
	}

	return (0);
}
