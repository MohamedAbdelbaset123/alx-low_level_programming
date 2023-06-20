#include "main.h"

/**
 * _isalpha - check `c` if it is letter or not
 *
 * @c: input
 *
 * Return: 1 if `c` is upper or lowercase otherwise always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
