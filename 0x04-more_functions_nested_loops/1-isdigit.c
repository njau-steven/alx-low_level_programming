#include "main.h"

/**
 * _isdigit - Entry Point
 * @c: input character
 * Return: 1 for digit or 0 otherwise
 */

int _isdigit(int c)
{
	int isdigit = 0;
	char i = '0';

	for (; i < '9'; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
