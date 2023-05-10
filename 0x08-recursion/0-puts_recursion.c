#include "main.h"

/**
 * _puts_recursion - a function that prints a string.
 * @s: pointer to characters of string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}