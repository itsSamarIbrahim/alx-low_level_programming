#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of a text file
 * @letters: the number of letters to be read and printed
 * Return: the actual number of letters to be successfully read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t bytes_read, bytes_written;
	char *buffer;
	/**
	 * letters is the number of letters
	 */

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(file, buffer, letters);
	if (bytes_read <= 0)
	{
		close(file);
		return (0);
	}
	/**
	 * it means that the read operation failed or reached the end of the file
	 */

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file);

	if (bytes_written != bytes_read)
		return (0);
	/**
	 * If they are not equal, it means that the write operation failed
	 * or did not write the expected amount of bytes
	 */

	return (bytes_written);
}
