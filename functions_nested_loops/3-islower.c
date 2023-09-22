#include "main.h"
/**
 * int _islower - this function returns a boolean if true
 * @x: variable
 * Return: 1 or 0
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
