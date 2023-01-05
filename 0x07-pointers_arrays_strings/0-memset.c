#include "main.h"
/**
 * *_memset - Function that fills memory with cont byte
 * @s: Const char
 * @c: Const Char
 * @n: integer
 * Return: Always 0 Success
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
