#include <stdio.h>
/**
 * main - Entry point
 * *
 * Return: always 0
 * *
 */
int main(void)
{
	int a;
	int i;

	for (a = 0; a < 9; a++)
	{
		for (i = a + 1; i < 10; i++)
		{
			putchar((a % 10) + '0');
			putchar((i % 10) + '0');

			if (a == 8 && i == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
