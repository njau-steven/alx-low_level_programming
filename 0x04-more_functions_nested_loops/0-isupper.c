#include "main.h"

/**
 * _isupper - Entry Point
 * @c: input character
 * Return: 1 if uppercase or 0 if lowercase
 */

int _isupper(int c)
{
	int isupper = 0;
	char upper = 'A';

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}
		return (isupper);
}
