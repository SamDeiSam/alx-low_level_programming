#include "main.h"
/**
 * string_toupper - function changes all lowercase letters
 * of string to uppercase
 * @s: input string
 * Return: pointer to the resulting string dest
 */

char *string_toupper(char *s)
{
	int str = 0;

	while (*(s + str) != '\0')
	{
		if ((*(s + str) >= 97) && (*(s + str) <= 122))
			*(s + str) = *(s + str) - 32;
		str++;
	}

	return (s);
}
