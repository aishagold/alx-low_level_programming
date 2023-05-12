#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: input value
 * @c: input value
 * Return: pointer to first occurrence of c in string s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
