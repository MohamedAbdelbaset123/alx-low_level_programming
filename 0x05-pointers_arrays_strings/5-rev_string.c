#include "main.h"

/**
 * rev_string - function
 *
 * @s: input
 */

void rev_string(char *s)
{
	int lenght = 0;
	int n = 0;
	int swap;

	while (s[length] != '\0')
	{
		length = length + 1;
	}

	while (n < length / 2)
	{
		swap = s[n];
		s[n] = s[length - 1 - n];
		s[length - 1 - n] = swap;
	}
}
