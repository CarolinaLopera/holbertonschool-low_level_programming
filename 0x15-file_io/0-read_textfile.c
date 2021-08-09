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
	int fd = open(filename, O_RDWR | O_APPEND, 0700);
	ssize_t count;
	char buf[500];

	if (fd == -1)
		return (0);
	if (filename == NULL)
		return (0);

	count = read(fd, buf, letters);

	write(fd, buf, letters);

	close(fd);
	return (count);
}
