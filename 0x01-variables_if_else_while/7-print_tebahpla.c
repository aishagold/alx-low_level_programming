#include <stdio.h>

/**
 * main- a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)

{
	char lr;

	for (lr = 'z'; lr >= 'a'; lr--)
		putchar(lr);

	putchar('\n');

	return (0);
}
