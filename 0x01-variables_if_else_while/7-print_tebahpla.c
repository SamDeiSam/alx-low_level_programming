#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);
	putchar('\n');

	return (0);
}
