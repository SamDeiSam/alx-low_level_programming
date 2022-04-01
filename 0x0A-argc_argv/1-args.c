#include <stdio.h>
/**
 * main - function prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: contains the program command line arguments
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
