#include "main.h"

/**
 * print_alphabet - Entry point
 *
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a = a + 1;
	}
	_putchar('\n');
}
