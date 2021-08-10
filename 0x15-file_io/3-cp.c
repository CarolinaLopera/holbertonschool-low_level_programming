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
	int file_from, file_to, count_rd, count_wt, error;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97); }
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	count_rd = read(file_from, buf, 1024);
	if (count_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100); }
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	count_wt = write(file_to, buf, count_rd);
	if (count_wt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100); }
	return (0);
}
