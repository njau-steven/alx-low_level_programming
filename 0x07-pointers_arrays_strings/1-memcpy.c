#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: Copy destination
 * @src: copy source
 * @n: integer
 * Return: Alway 0 success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
