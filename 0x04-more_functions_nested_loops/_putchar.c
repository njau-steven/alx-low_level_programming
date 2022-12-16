#include <unistd.h>

/**
 * Main - Entry 
 *
 * Return: Always 0 (sucess)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
