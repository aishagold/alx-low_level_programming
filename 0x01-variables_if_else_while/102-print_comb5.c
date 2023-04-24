#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
		if (i != j && !(i == 0 && j == 1))
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}

	return (0);
}

