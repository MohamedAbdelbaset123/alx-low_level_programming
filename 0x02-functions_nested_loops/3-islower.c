#include "main.h"

/**
 * _islower - function to check if
 * 	      character is lowercase
 *
 * @c: chaecks input of function
 *
 * Return: returns 1 if `c` is lowercase
 * 	   otherwise always 0 (Success)
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
