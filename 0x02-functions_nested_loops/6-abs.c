#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
*
* Return: 0 and 1.
*@num: is a variable int
*/
int _abs(int num)
{
	int positive = num * -1;

	if (num < 0)
	{
		return (positive);
	}
	else if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (0);
	}
}
