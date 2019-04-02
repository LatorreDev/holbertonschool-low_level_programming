#include "holberton.h"

/**
* read_textfile - A function that read the content of a file
* @filename: entry name for filename
* @letters: entry content to a file
* Return: 1 if sucess
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file = 0, len = 0, wr = 0;
	char *my_buffer;

	if (filename == NULL)
		return (0);
	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
		return (-1);
	my_buffer = malloc(sizeof(char) * letters);
	if (my_buffer == NULL)
	{
		close(my_file);
		return (0);
	}

	len = read(my_file, my_buffer, letters);
	if (len == -1)
	{
		close(my_file);
		return (0);
	}
	wr = write(STDOUT_FILENO, my_buffer, len);
	if (wr == -1)
	{
		close(my_file);
		return (0);
	}
	close(my_file);
	return (len);
}
