#include "main.h"
/**
 * read_textfile - This function convert a binary to decimal.
 *
 * Return: Always int.
 * @filename: Is a variable char pointer.
 * @letters: Is a variable char pointer.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *file_from, *file_to, buf[1024];
	ssize_t count_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file ", argv[1]);
		exit(98);
	}

	count_read = read(fd_from, buf, 1024);
	close(fd_from);

	fd_to = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, 00664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to ", argv[2]);
		exit(99);
	}

	write(fd_to, buf, count_read);
	close(fd_to);
	return (0);
}
