#include <stdio.h>
/**
* main - entry point
* @argc: count arguments
* @argv: array arguments
* Return: always sucess
*/

int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%i\n", i);
	(void)argv;
	return (0);
}
