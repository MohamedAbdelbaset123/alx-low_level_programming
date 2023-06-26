#include "main.h"

/**
 * print_rev - function
 *
 * @s: input
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev = rev + 1;
	}

	while (rev = rev - 1)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
