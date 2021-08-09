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
	ssize_t count_write, count_read;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf  = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	count_read = read(fd, buf, letters);
	count_write = write(1, buf, count_read);

	close(fd);
	free(buf);
	return (count_write);
}
