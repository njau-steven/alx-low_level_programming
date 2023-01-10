#include <unistd.h>

/**
 * _putchar - Function that writes c to stdout
 * @c: Character to print
 * Return: Always 0 Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
