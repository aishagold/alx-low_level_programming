#include <stdio.h>

/**
 * main- a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char bn;
	char bl;

	for (bn = '0'; bn <= '9'; bn++)
		putchar(bn);

	for (bl = 'a'; bl <= 'f'; bl++)
		putchar(bl);

	putchar('\n');

	return (0);
}

