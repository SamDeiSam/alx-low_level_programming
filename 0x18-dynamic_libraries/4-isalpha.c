#include "main.h"
/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: returns 1 if the character is a letter,lowercase or uppercase
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int a;
	int b;

	for (b = 65; b < 91; b++)
	{
		for (a = 97; a < 123; a++)
		{
			if (b == c || a == c)
				return (1);
		}
	}
	return (0);
}
