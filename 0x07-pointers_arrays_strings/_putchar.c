#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints character 'c' to standard output.
 * @c: input value
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
	
