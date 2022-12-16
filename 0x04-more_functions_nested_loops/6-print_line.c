#include "main.h"

/**
 * print_line - Entry Point
 * @n: input character
 * Return: Always 0 Sucess
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
