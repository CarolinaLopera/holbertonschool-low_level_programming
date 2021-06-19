#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 56)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('9');
	return (0);
}
