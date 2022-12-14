#include "main.h"

/**
 * jack_bauer - Entry Point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h, i;

	for (h = 0; h < 24; h++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
