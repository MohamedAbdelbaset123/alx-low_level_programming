#include "main.h"

/**
 * rev_string - function
 *
 * @s: input
 */

void rev_string(char *s)
{
	int n = 0;
	char swap;
	int length = 0;

	while (s[length] != '\0')
	{
		++length;
	}

	while (n < length / 2)
	{
		swap = s[n];
		s[n] = s[length - 1 - n];
		s[length - 1 - n] = swap;
		n = n + 1;
	}
}
