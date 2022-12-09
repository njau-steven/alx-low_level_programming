#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 *
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of artis useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
