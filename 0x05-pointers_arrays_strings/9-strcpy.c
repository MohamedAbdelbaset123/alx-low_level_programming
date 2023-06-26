#include "main.h"

/**
 * _strcpy - function
 *
 * @dest: 1st input
 *
 * @src: 2nd input
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
