#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: array of pointers to arguments
 * Return: 0 on success, otherwise 1.
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* To convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mult = num1 * num2;

	printf("%d\n", mult);

	return (0);
}
