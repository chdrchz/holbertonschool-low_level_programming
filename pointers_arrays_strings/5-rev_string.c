#include "main.h"
/**
 * rev_string - reverses a string
 *
 * Return: 0
 */
void rev_string(char *s)
{
        char tmp;
	int i;
	int j;

        for (i = 0; s[i] != 0; i++)
        {
        }
        for (j = i - 1; j != 0; j--)
        {		
        }

	tmp = s[i];
        s[i] = s[j];
        s[j--] = tmp;
}
