#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: input of function
 *
 * Return: 1 if 'c' is lowercase
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
