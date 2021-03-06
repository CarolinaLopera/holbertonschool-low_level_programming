#include "main.h"
/**
 * append_text_to_file - This function convert a binary to decimal.
 *
 * Return: Always int.
 * @filename: Is a variable char pointer.
 * @text_content: Is a variable char pointer.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	write(fd, text_content, i);
	return (1);
}
