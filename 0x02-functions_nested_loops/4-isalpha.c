#include "main.h"

/**
 * _isalpha - To Check for the alpha character
 * @c: input character
 * Return: 1 if character is uppercase or lowercase 0 if otherwise
 */

int _isalpha(int c)
{
	char d, E;
	int isletter = 0;

	for (d = 'a'; d <= 'z'; d++)
	{
		for (E = 'A'; E <= 'Z'; E++)
		{
			if (c == d || c == E)
				isletter = 1;
		}
	}
	return (isletter);
}
