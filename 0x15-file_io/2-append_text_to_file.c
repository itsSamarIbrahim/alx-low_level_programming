#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of a text file
 * @text_content: the text content to be appended to the file
 * Return: 1 (ON SUCCESS) or -1 (ON FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t len = 0, bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	while (text_content[len])
		len++;

	bytes_written = write(file_descriptor, text_content, len);
	close(file_descriptor);

	if (bytes_written == -1 || bytes_written != len)
		return (-1);

	return (1);
}
