#include "main.h"

/**
 * leet - leet
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	char alphaArray[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaArray[j] != '\0'; j++)
		{
			if (s[i] == alphaArray[j])
			{
				s[i] = alphaArray[j + 1];
				break;
			}
		}
	}
	return (s);
}
