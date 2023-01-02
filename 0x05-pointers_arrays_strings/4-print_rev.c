#include "main.h"

/**
 * print_rev - Function that prints string in reverse
 * @s: String
 * Return: Always 0 Success
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
