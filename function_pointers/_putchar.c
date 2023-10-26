#include <unistd.h>
/**
 * _putchar - puts a character
 *
 * Return: int
 */
int _putchar(char)
{
	char c;
	return (write(1, &c, 1));
}
