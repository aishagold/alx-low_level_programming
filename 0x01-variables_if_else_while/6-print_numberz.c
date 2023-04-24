#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- a program that prints all single digit numbers starting from 0
 * Return: Always 0 (Success)
 */

int main(void)

{

	int c;

	for (c = '0'; c <= '9'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
