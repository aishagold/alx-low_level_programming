#include "main.h"

/**
 * swap_int - a function that swaps two integers
 * @a: the first integer to be checked
 * @b: the second integer to be checked
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
