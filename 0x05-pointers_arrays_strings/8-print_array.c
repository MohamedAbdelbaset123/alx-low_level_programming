#include "main.h"

/**
 * print_array
 *
 * @a: 1st input
 *
 * @n: 2nd input
 */

void print_array(int *a, int n)
{
		int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
