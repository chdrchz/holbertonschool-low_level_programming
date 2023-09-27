#include <stdio.h>

int main(void)
{
	int i;
	int sum = 1;

	i = 1;

	while (i <= 100)
	{
		sum += i;
		i++;
		printf("%d\n", sum);
	}
}
