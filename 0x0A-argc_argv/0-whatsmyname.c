#include <stdio.h>

/**
 * main - prints the name of this program
 * @argc: argument count
 * @argv: array of pointers to arguments
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
