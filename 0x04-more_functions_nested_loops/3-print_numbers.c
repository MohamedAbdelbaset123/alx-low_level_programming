#include "main.h"

/**
 * print_numbers - function
 *
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
