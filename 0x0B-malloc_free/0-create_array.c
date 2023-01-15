#include <stdlib.h>
/**
 * *create_array - Function that created an array of chars
 * @size: size of array
 * @c: character
 * Return: Always 0 success
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if  (p == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
