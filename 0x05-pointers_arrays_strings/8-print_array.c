#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints elements of an array
 * @a: integer
 * @n: integer
 * Return: Always 0 success
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
