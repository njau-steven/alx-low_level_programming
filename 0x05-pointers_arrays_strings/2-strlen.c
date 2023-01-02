#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: String character
 * Return: Always 0 Success
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
