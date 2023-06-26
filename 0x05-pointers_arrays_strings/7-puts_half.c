#include "main.h"

/**
 * puts_half - function
 *
 * @str: input
 */
void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n = n + 1;
	}
	n = n + 1;
	int n /= 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n = n + 1;
	}
	_putchar('\n';
}
