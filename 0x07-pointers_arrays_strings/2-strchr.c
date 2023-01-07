#include "main.h"
/**
 * _strchr - Function that finds character in string
 * @s: String character
 * @c: find character
 * Return: Always 0 success
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
		if (c == *s)
			return (s);
		return (NULL);
}
