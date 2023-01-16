#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Function that concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: integer
 * Return: Always 0 success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1count, s2count, sizebuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	s2count > n ? (s2count = n) : (n = s2count);
	sizebuffer = s1count + s2count + 1;
	p = malloc(sizebuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizebuffer - 1; i++)
		i < s1count ? (p[i] = s1[i]) : (p[i] = s2[i - s1count]);
	p[sizebuffer] = '\0';
	return (p);
}
