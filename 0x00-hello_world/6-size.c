#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	printf("Size of int: %i bytes\n", sizeof(int));
	printf("Size of float: %i bytes\n", sizeof(float));
	printf("Size of double: %i bytes\n", sizeof(double));
	printf("Size of char: %i byte\n", sizeof(char));

	return (0);
}