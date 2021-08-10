#include "main.h"
/**
 * main - This function main.
 *
 * Return: Always int.
 * @argc: Is a variable char pointer.
 * @argv: Is a variable char pointer.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *file_from, *file_to, buf[1024];
	ssize_t count_read, error;

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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	count_read = read(fd_from, buf, 1024);
	error = close(fd_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	fd_to = open(file_to, O_TRUNC | O_CREAT | O_WRONLY | O_APPEND, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	write(fd_to, buf, count_read);
	error = close(fd_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
