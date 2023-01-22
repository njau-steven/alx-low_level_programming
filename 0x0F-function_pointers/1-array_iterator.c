#include <stdlib.h>
/**
 * array_iterator - Function that executes a function
 * @array: array in the function
 * @size: array size
 * @action: array action
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
