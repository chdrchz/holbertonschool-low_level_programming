#include <stdio.h>
/**
 * main - function to
 *
 * Return: 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n>0)
                printf("is positive");
        else
                printf("is negative");
        if (n==0)
                printf("n is 0");
        return (0);
}
