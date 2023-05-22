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
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * i);

	if (array == NULL)
		return (NULL);

	if (i == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		c = array[i];

	return (array);
}
