#include "holberton.h"
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
