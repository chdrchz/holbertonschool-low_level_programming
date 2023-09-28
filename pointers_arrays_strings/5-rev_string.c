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
        int x;

        for (i = 0; s[i] != 0; i++)
        {
		tmp = s[i];
		s[i] = s[x];
		s[x--] = tmp;
        }
        for (x = i - 1; x >= 0; x--)
        {
        }

	
}
