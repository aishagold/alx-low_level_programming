#include <stdio.h>

/**
 * whatsmyname - prints the name of this program 
 */

int main(int argc, char* argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
