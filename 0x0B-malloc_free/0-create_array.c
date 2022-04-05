#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of char
 * and initializes it with a specific char
 * @size: the size of array
 * @c: specifc char to initialize array
 * Return: NULL if size = 0 else returns the pointer to array,
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

		return (array);

}
