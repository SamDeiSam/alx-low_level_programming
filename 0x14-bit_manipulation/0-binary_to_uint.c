#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: string containing binary number to unsigned int
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[index] - '0');
	}

	return (dec_val);
}
