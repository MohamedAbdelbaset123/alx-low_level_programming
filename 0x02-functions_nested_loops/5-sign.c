#include "main.h"

/**
 * print_sign - function
 *
 * @n: input
 *
 * Return: 1 and print `+` if `n` > `0`
 * 0 and print `0` if `n` = `0`
 * -1 and print `-` if `n` < `0`
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
