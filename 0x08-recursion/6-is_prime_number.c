#include "main.h"

/**
 * is_prime - function shows if number inputted is prime number
 * @n: accepts number
 * @c: iterator
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, m + 1));
}

/**
 * is_prime_number - function shows if inputted number is prime number
 * @n: accepts number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
