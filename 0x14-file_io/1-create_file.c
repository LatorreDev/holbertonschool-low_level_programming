#include "holberton.h"

/*
* create file - A function that creates a file with a content
* @filename: entry name for filename
* @text_content: entry content to a file
* Return: 1 if sucess
*/ 

int create_file(const char *filename, char *text_content)
{
	int my_file, counter = 0;

	if (filename == NULL)
	       return (-1);	

	/* write */
	
	my_file = open(filename, O_CREAT | O_RDWR , 0600);

	if (text_content == NULL)
		return (1);
	if (my_file == -1)
	{
		printf ("File can't be created.\n");
		exit (1);
	}

	while (text_content[counter])
		counter++;
	write(my_file, text_content, counter);
	
	close (my_file);

	return (1);
}
