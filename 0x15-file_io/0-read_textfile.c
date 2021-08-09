#include "main.h"
/**
 * read_textfile - This function convert a binary to decimal.
 *
 * Return: Always int.
 * @filename: Is a variable char pointer.
 * @letters: Is a variable char pointer.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0700);
	if (fd == -1)
		return (0);

	buf  = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	read(fd, buf, letters);
	count = write(1, buf, letters);

	close(fd);
	free(buf);
	return (count);
}
