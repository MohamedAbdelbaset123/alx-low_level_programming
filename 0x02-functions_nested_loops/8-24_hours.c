#include "main.h"

/**
 * jack_bauer - function
 */

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	while (hr <= 23)
	{
		while (min <= 59)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_puchar('\n');
			min = min + 1;
		}
		min = 0;
		hr = hr + 1;
	}
	return (0);
}
