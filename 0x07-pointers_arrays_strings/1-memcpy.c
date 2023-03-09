#include "main.h"

/**
 * *_memcpy - main function.
 * @dest: Pointer to destination.
 * @src: Pointer to the source.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*p++ = *src++;

	return (dest);
}
