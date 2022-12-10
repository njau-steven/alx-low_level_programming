#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char low;
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
