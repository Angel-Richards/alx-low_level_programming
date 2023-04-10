#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: text file to be read.
 * @text_content: number of letters to be read.
 *
 * Return: If the function fails - -1
 *	0 when filename is NULL or function fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, content_length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		content_length = strlen(text_content);
	}

	file_descriptor = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
