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

	if (argc == 0)
	{
		printf("0\n");
	}

	int result;
	int i;

//	if (argv > atoi("0"))
//	{
		for (i = 1 ; i < argc ; i++)
		{
	result = atoi(argv[1]) + atoi(*argv[i]);
	printf("%i\n", result);
	(void) argc;
	return (0);
		}
//	}

/*	else
	{
		printf("Error\n");
		return(1);
	}
*/
}
