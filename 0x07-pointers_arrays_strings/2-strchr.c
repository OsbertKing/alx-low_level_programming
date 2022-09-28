#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string to locate character
 * @c: character
 * Return: value of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
