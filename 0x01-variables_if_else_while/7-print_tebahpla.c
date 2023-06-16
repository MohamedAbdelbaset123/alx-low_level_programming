#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z = z - 1;
	}
	putchar('\n');
	return (0);
}
