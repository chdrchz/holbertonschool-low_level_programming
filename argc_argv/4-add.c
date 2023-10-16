#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array or arguments (string)
 * Return: void
 */
int main(int argc, char *argv[])
{
int counter;
long number;

if (argc < 2)
{
printf("0\n");
return 0;
}

int sum_Of_Numbers;
sum_Of_Numbers = 0;

for (counter = 1; counter < argc; counter++)
{
char *endptr;
number = strtol(argv[counter], &endptr, 10);

if (*endptr != '\0')
{
return 1;
}

if (number < 0 || (number < 48 && number > 57))
{
return 1;
}

sum_Of_Numbers += number;
}
printf("%d\n", sum_Of_Numbers);

return 0;
}

