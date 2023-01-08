#include "main.h"
/**
 * strpbrk - Function that searches string for any set of bytes
 * @s: String
 * @accept: Accept string
 * Return: Always 0 success;
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
