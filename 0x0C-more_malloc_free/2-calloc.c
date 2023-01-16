#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory of an array using malloc
 * @nmemb: number of members
 * @size: size of the array
 * Return: Always 0 success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
		*(p + i) = 0;
	return (p);
}
