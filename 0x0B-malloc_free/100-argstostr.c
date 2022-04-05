#include "main.h"
#include <stdlib.h>

/**
 * argstostr - funtion concatenates all the arguments of a program.
 * @ac: number of arguments passed
 * @av: argument vector
 *,njbjknkjnjknkjnmnm
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}

	str = malloc((a + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str)
		return (NULL);
	}

	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			str[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
			str[d] = av[b][c];
	}
	str[d] = '\0';

	return (str);
}
