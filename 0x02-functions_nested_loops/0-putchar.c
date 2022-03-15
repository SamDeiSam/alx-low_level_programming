#include <unistd.h>
#include <main.h>

/**
 * main - prints the word "Holberton", followed by a new line.
 * Return: 0 on success.
 */
int main(void)
{
	char w[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(w[i]);
	_putchar('\n');

	return (0);
}
