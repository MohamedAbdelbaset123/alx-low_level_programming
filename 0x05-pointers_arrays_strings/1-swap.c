#include "main.h"

/**
 * swap_int - function
 *
 * @a: 1st input
 *
 * @b: 2nd input
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
