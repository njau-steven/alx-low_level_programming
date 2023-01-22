#include <stdlib.h>
/**
 * int_index - Function to search for string
 * @array: Array
 * @size: array size
 * @cmp: compare function
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
