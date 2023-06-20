#include "main.h"

/**
 * print_last_digit - function
 *
 * @n: input
 *
 * Return: `l`
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = (n % 10) * -1;
	}
	else
	{
		l = n % 10;
	}
	_putchar(l + '0');
	return (l);
}
