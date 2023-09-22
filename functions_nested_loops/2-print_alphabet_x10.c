#include <stdio.h>
/**
 * print_alphabet - prints the alphabet 10 times
 *
 * Return: nothing
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
	putchar('\n');
	}
}
