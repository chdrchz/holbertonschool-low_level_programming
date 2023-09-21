#include <stdio.h>
/**
 * main - prints a specific line
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
		putchar(x);
	for (x = 'A'; x <= 'Z'; ++x)
		putchar(x);
	putchar('\n');

	return (0);
}
