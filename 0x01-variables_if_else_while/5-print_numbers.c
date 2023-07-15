#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: program that prints all single digit numbers of base
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}
