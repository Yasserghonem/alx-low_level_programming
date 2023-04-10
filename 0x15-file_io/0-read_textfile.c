#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;

	char *totalSize;

	totalSize = malloc(sizeof(char) * letters);
	if (totalSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, totalSize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, totalSize, fread)
		if (fwrite == -1)
			return (0);
	close(file);
	free(totalSize);
	return (fwrite);
}
