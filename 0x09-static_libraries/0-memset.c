#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * the number of bytes to fill
 * constant byte
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
