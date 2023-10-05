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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
		return ('\0');
	}
}
