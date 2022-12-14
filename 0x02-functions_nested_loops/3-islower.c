#include "main.h"

/**
 * _islower - Entry Point
 * @c: input character
 * Return: 1 if Uppercase or 0 if lowercase
 */

int _islower(int c)
{
	char d;
	int lower = 0;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == c)
			lower = 1;
	}
	return (lower);
}
