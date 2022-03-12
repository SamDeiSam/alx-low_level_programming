#include <stdio.h>

/**
 * main - Prints alphabets in lower cases, then in upper cases.
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	for (la = 'A'; la <= 'Z'; la++)
	{
		putchar(la);
	}
	putchar('\n');

	return (0);
}
