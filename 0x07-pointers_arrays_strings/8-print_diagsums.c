#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, x = 0, y = 0;

	for (index = 0; index < size; index++)
	{
		x += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		y += a[index];
		a -= size;
	}

	printf("%d, %d\n", x, y);
}
