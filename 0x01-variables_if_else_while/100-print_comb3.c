#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0, nn = 1;

	while (n < 9)
	{
		while (nn < 10)
		{
			putchar(n + '0');
			putchar(nn + '0');
			if (n != 8 || nn != 9)
			{
				putchar(',');
				putchar(' ');
			}
			nn = nn + 1;
		}
	n = n + 1;
	nn = n + 1;
	}
	putchar('\n');
	return (0);
}
