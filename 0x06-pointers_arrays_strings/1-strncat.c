#include "main.h"
/**
 * _strncat - concats two sentence
 *
 * @dest: destination for concat
 * @src: sourcefor concat
 * @n: number of concat times
 *
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
