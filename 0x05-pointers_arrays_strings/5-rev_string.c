#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: 0
 */
void rev_string(char *s)
{
	int length = 0, 1 = 0;
	char temp;

	while (s[length] != '\0')
		length++;
	while (i < length--)
	{
		temp = s[1];
		s[i++] = s[length];
		s[length] = temp;
	}
}
