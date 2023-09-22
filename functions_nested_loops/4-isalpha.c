#include "main.h"
/**
 * _isalpha - tests if a char is in the alphabet
 *
 * Return: 1 and 0
 */
int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))	
		return (1);
	else
		return (0);
}
