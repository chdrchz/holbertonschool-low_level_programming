#include <stdio.h>
/**
 * main - what does this do?
 *
 * Return: ?
 */
void print_alphabet_x10(void)
{

	char x;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		putchar(x);
		}
	}

	putchar('\n');
}
