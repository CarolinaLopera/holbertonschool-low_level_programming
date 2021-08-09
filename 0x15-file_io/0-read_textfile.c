#include "main.h"
/**
 * binary_to_uint - This function convert a binary to decimal.
 *
 * Return: Always int.
 * @b: Is a variable char pointer.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd = open(filename, 02, 0700);
    ssize_t count, i;
    char aux[500];

    if (fd == -1)
        return (0);
    if (filename == NULL)
        return (0);
    
    for (i = 0; i < *filename; i++)
    {
        aux[i] = *filename;
        filename++;
    }
    
    count = write(fd, filename, letters);

    read(fd, aux, letters);

    close(fd);
    return (count);
}
