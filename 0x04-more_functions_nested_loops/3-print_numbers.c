#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		only using _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{

		_putchar(ch);
	}
	_putchar('\n');
}
