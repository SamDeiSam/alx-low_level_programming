#include "main.h"
/**
 * _islower - Checks Holberon
 * 
 */
int _islower(int c)
{
	int x;

	for (x = 97; x < 123; x++)
		if (x == c)
			return (1);
	return (0);
}
