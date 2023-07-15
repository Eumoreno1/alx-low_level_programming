#include <stdio.h>

/**
 * main - program starts here
 * Description: program that prints all the numbers of base sixteen
 *
 * Return: 0
 */

int main(void)
{
	char hex_figs[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex_figs[i]);
	}

	putchar('\n');
	return (0);
}
