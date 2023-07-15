#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: program that prints the alphabet in different cases
 *
 * Return: (0)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}

	putchar('\n');
	return (0);
}
