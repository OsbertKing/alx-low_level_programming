#include "main.h"
/**
 * _memset - set memoru to array
 * @s: array
 * @b: value to set it as
 * @n: execution times
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
