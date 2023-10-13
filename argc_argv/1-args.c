#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing number of arguments
 * @argc: size of argv
 * @argv: array of strings
 * Return: void
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
