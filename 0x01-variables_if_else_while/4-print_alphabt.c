#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry point
 * *
 * Return: always 0
 * *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	return (0);
}
