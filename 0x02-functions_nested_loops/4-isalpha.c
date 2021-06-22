#include "holberton.h"
/**
* _isalpha - check the code for Holberton School students.
*
* Return: 0 and 1.
* @c: is a int assi.
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
