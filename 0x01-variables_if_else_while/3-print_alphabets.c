#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * *
 * Return: always 0
 * *
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		for (b = 'A'; b <= 'Z'; b++)
		{
			putchar(b);
			putchar('\n');
		}
	}
	return (0);
}
