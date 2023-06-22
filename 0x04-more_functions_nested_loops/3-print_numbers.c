#include "main.h"

/**
 * print_numbers - function
 *
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	do
	{
		_putchar(a + '0');
		a = a + 1;
	}
	while (a >= 0 && a <= 9);
	_putchar('\n');
}
