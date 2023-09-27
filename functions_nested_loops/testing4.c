#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int sum = 0;

	i = 2;

	while (i <= 100)
	{
		sum += i;
		i = i + 2;
		printf("%d\n", sum);
	}
}
