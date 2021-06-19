#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int letter = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
