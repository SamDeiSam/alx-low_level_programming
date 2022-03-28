#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @n: first bytes of memory filled
 * @s: memory area
 * @b: constant byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, chqar b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
