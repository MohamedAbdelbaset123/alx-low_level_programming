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
		_putchar(a + '0');
		a = a + 1;
	}
	_putchar('\n');
	return (0);
}
