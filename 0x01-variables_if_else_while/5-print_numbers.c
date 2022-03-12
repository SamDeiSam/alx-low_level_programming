#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints single digits numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		printf("%d", b);
	printf("\n");

	return (0);
}
