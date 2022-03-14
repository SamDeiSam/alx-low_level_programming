#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;
	int e;

	for (e = '0'; e <= '9'; e++)
		putchar(e);
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
