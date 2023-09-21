#include <stdio.h>
/**
 * main - using putchar function
 *
 * x is my placeholder for every letter in the alphabet
 * Return: 0
*/
int main(void)
{
	char lil_guys;

	for (lil_guys = 'a'; lil_guys <= 'z'; ++lil_guys)
		putchar(lil_guys);
	putchar('\n');

	return (0);
}
