#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination to copy string to
 * @src: source string to copy
 * Return: the pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (index >= 0)
	{
		*(dest + index) = *(src + index);
		if (*(src + index) == '\0')
			break;
		index++;
	}
	return (dest);
}
