#include <stdio.h>

/**
 * main- a program that prints the alphabet in lowercase, except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char lc;

for (lc = 'a'; lc <= 'z'; lc++)
{
	if (lc != 'q' && lc != 'e')
	putchar(lc);
}
putchar('\n');
return (0);
}
