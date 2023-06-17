#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0, nn = 0;

	while (n <= 99)
	{
		nn = n + 1;
		while (nn <= 99)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(nn / 10 + '0');
			putchar(nn % 10 + '0');
			if (n != 98 || nn != 99)
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
