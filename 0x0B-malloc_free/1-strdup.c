#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly created allocated space
 * @str: string
 * Return: Always 0 Success
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < len; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
