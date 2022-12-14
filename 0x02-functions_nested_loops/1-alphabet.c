#include "main.h"

/**
 * print_alphabet - Using _putchar
 * Description : Print alphabet
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	_putchar(low);
	_putchar('\n');

}
