#include "main.h"

/**
 * _strcpy - Function that copies string pointed by src
 * @dest: Destination string
 * @src: Source string
 * Return: Always 0 success
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

