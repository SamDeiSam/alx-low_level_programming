#include "main.h"
/**
 * swap_int - function to swap values of two integers
 * @a: Input of "a" pointer
 * @b: Input of "b" pointer
 * Return : 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
