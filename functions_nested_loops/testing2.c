#include <stdio.h>

void main(void)
{
	int num;

	num = 2;

	while ((num > 1) && (num < 101))
	{
		if ((num % 2) == 0)
		{
			printf("%d\n", num);
		}

		num = num + 1;
	}
}
