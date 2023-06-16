#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0, nn = 1, nnn = 2;

	while (n < 8)
	{
		while (nn < 9)
		{
			while (nnn < 10)
			{
				putchar(n + '0');
				putchar(nn + '0');
				putchar(nnn + '0');
				if (n != 7 || nn != 8 || nnn != 9)
				{
					putchar(',');
					putchar(' ');
				}
				nnn = nnn + 1;
			}
		nn = nn + 1;
		nnn = nn + 1;
		}
	n = n + 1;
	nn = n + 1;
	nnn = nn + 1;
	}
	putchar('\n');
	return (0);
}
