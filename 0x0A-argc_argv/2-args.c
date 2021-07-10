#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always int.
 * @argc: is a variable int.
 * @argv: is a variable char*.
 *
 */
int main(int argc, char *argv[])
{
int count;

printf("%s\n", argv[0]);
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}
return (0);
}
