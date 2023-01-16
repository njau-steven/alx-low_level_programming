#include <stdlib.h>
/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: variable
 * Return: Always 0 success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
