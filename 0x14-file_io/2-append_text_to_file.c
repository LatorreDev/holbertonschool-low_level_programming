#include "holberton.h"

/**
* append_text_to_file - A function that creates a file with a content
* @filename: entry name for filename
* @text_content: entry content to a file
* Return: 1 if sucess
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int my_file, counter = 0;

	if (filename == NULL)
		return (-1);

	/* write */
	my_file = open(filename,  O_RDWR | O_APPEND, 0600);

	if (text_content == NULL)
		return (1);
	if (my_file == -1)
		return (-1);
	while (text_content[counter])
		counter++;
	write(my_file, text_content, counter);

	close(my_file);

	return (1);
}
