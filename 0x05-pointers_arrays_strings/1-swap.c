#include "main.h"

/**
 * swap_int - Function to swap integer to pointer
 * @a: Integer a
 * @b: integer b
 * return: Always 0 Success
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
