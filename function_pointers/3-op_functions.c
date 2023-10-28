#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two ints
 * @a: first int
 * @b: second int
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: first int
 * @b: second int
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second int
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos two ints
 * @a: first int
 * @b: second int
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
