#include "main.h"
/**
 * rev_string - reverses a string
 *
 * Return: 0
 */
void rev_string(char *s)
{
        char *tmp = '\0';
	int i;
	int j;

        for (i = 0; s[i] != '\0'; i++)
        {
		tmp[i] = s[i];
        }

	tmp[i] = '\0';
	i--;

        for (j = 0; s[j] != '\0'; j++)
        {
		s[j] = tmp[i--];
        }
}
