#include <stdio.h>

/**
 * main- a function that prints all possible combination of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 0, p = 1;

	for (d = 0; d < 9; d++)
	{
		for (p = d + 1; p <= 9; p++)
		{
		putchar(d + '0');
		putchar(p + '0');
		if (d != 8 || p != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
