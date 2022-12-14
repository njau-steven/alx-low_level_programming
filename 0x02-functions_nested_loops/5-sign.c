#include "main.h"

/**
 * print_sign - Printing sign
 * @n: input character
 * Return: 1 0 or -1
 */

int print_sign(int n)
{
	int m;

	if (n > 1)
	{
		m = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		m = 0;
		_putchar('0');
	}
	else
	{
		m = -1;
		_putchar('-');
	}
	return (m);
}
