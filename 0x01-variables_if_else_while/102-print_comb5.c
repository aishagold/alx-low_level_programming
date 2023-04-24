#include <stdio.h>

/**
 * main- a program that prints all possible combinations of two two-digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens1, units1, tens2, units2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (units1 = 0; units1 <= 9; units1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				int start = (tens2 == tens1) ? units1 : 0;

				for (units2 = start; units2 <= 9; units2++)
				{
					if (tens1 == tens2 && units1 >= units2)
					{
					putchar(tens1 + '0');
					putchar(units1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(units2 + '0');
					}
					if (tens1 == 9 && units1 == 9 && tens2 == 9 && units2 == 9)
					{
					putchar('\n');
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
		}

	return (0);
}

