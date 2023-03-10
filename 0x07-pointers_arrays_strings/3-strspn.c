#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the character to print.
 *
 * Return:  the number of bytes in the initial segment of *s which
 * consist only of bytes from *accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = s;

	while (*p && strchr(accept, *p))
	{
		count++;
		p++;
	}
	return (count);
}
