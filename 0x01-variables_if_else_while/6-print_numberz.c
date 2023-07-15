#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program starts here
 * Description: a program that prints all single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
