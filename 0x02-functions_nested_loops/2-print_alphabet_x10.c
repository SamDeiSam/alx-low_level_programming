#include "main.h"
/**
 * print_alphabet_x10 -print 10times the alphabet
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int x;
	int count = 0;

	while (count < 10)
	{
								
		for (x = 97; x < 123; x++)		
			_putchar(x);						_putchar('\n');					``		count++;					
	}
}
