#include "main.h"
/**
 * c: an input character
 * _islower - Checks Holberon
 * Description: uses _putchar to print alphabet in lowercase 10 times
 * Return: 1 if its lowercase or 0 if its uppercase
 */
int _islower(int c)
{
	int x;

	for (x = 97; x < 123; x++)
		if (x == c)
			return (1);
	return (0);
}
