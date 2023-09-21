#include <stdio.h>
/**
 * main - printing the alphabet, excluding e and q
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		putchar(x);
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
