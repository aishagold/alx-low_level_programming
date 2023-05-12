#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: array of pointers to arguments
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc);

	return (0);
}
