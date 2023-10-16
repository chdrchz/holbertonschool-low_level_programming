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
    int sum_Of_Numbers = 0;

    if (argc < 2)
    {
        printf("0\n");
        return 0;
    }

    for (counter = 1; counter < argc; counter++)
    {
        char *endptr = argv[counter];

        while (*endptr != '\0')
        {
            if (!isdigit(*endptr) && !(endptr == argv[counter]))
            {
                printf("Error: Not a valid integer\n");
                return 1;
            }
            endptr++;
        }

        number = strtol(argv[counter], NULL, 10);

        if (number < 0 || (number < 48 && number > 57))
        {
            printf("Error: Number out of range\n");
            return 1;
        }

        sum_Of_Numbers += number;
    }
    printf("%ld\n", sum_Of_Numbers);

    return 0;
}
