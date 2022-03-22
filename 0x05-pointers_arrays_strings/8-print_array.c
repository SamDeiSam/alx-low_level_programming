#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers,
 * followed by a new line.
 * @a: input array
 * @n: input integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	putchar('\n');
}
