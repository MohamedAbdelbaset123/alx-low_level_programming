#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 */

void print_alphabet_x10(void)
{
	int a = 'a';
	int nul = 0;

	while (nul < 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a = a + 1;
		}
	putchar('\n');
	nul = nul + 1;
	a = 'a';
	}

}
