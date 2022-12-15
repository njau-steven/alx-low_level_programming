#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry Point
 * @n: input character
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
			continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
			continue;
			printf(", ");
		}
		printf("\n");
	}
}
