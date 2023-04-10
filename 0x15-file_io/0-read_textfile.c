#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a file and prints it to POSIX stdout.
 * @filename: Text file to be read.
 * @letters: Number of letters to be read and print.
 * Return: If the function fails or filename is NULL - 0
 *	W- actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, sze_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
