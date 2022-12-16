#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry Point
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
