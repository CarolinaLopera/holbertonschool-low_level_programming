#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_islower('c');
	return (0);
}
/**
* _islower - check the code for Holberton School students.
*
* Return: 0 and 1.
* @c: is a int assi.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
