#include "main.h"

/**
 * _memcpy - copies from src to dest in an array
 * @dest: destination
 * @src: source
 * @n: execution times
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
