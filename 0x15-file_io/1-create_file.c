#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 * Return: 1 (ON SUCCESS) or -1 (ON FAILURE)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/**
	 * O stands for "open"
	 * S_IRUSR | S_IWUSR | S_IXUSR is the same as 0700 - > rwx------
	 * S_IRGRP | S_IWGRP | S_IXGRP is the same as 0070 - > ---rwx---
	 * S_IROTH | S_IWOTH | S_IXOTH is the same as 0007 - > ------rwx
	 * S stands for "set" or "symbolic"
	 */
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}

		if (write(file_descriptor, text_content, len) != len)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
