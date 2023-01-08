#include "main.h"
#include <stdio.h>
/**
 * _strstr - Function that locates substring
 * @haystack: Where to find the string
 * @needle: What to find in the haystack
 * Return: Always 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
