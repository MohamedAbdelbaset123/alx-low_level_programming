#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n <= 9)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
	n = n + 1;
	}
	putchar('\n');
	return (0);
}
