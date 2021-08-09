#include "main.h"
/**
 * create_file - This function convert a binary to decimal.
 *
 * Return: Always int.
 * @filename: Is a variable char pointer.
 * @text_content: Is a variable char pointer.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	write(fd, text_content, i);

	close(fd);
	return (1);
}
