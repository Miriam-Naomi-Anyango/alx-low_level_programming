#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print letters in small letters except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	alp[24] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');

	return (0);
}
