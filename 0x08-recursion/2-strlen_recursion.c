#include "main.h"

/**
 * _strlen_recursion - lenght of string
 * @s: string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
}
