#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char, initializes it with a specific char
 * @c: character to assign
 * @size: size of array
 * Return: pointer to array, or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
