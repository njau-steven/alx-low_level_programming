#include <stdlib.h>
/**
 * str_concat - Function that concat two strings
 * @s1: string 1
 * @s2: sring 2
 * Return: Always 0 success
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1count, s2count, buffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	buffer = s1count + s2count + 1;
	p = malloc(buffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < buffer; i++)
		i < s1count ? (p[i] = s1[i]) : (p[i] = s2[i - s1count]);
	return (p);
}
