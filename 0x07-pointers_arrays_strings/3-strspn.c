#include "main.h"
#include <stdio.h>
/**
 * _strspn - lenght of prefixsubsyring
 * @s: string to go through
 * @accept: accepting bytes
 * Return: valueof unsigned char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int rst = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				rst++;
				break;
		}
		if (s[i] == 0)
			return (rst);
	}
	return (rst);
}
