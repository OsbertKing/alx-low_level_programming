#include "3-calc.h"

/**
 * op_add - adds two integer
 * op_sub - subtract two integer
 * op_mul - multiply two integer
 * op_div - divide an integer
 * op_mod - gives the remainder
 * @a : integer
 * @b : integer
 * return : int
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	int sub = a - b;

	if (sub < 0)
		sub = sub * -1;

	return (sub);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	int div = a / b;

	if (div == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (div);
}

int op_mod(int a, int b)
{
	int mod = a % b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (mod);
}
