#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: function minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *aoi;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	ast = malloc(sizeof(int) * range);

	if (aoi == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		aoi[i] = min++;

	return (aoi);
}
