#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: count arguments
* @argv: array arguments
* Return: always sucess
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", result);
	(void) argc;
	return (0);
}
