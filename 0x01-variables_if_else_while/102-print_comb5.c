#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0, nn = 1;

	while (n < 100)
	{
		nn = n;
		while (nn < 100)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(nn / 10 + '0');
			putchar(nn % 10 + '0');
			if (n != 99 || nn != 99)
			{
				putchar(',');
				putchar(' ');
			}
			nn = nn + 1;
		}
	n = n + 1;
	}
	putchar('\n');
	return (0);
}
