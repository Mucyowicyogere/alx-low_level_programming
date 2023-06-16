#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concatenates 2 strings.
 * @s1: str1 to conc
 * @s2: str2 to conc
 * Return: pointer to the allocated memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *s;
	int x, i;

	s = realloc(s1, (sizeof(s1) + n));
	if (s == NULL)
		return (NULL);
	if (n == sizeof(s2))
	x = sizeof(s1);
	if (n > sizeof(s2))
		n = sizeof(s2);
	for (i = 0; i < n; i++)
	{
		s[x] = s2[i];
		x++;
	}
	return (s);
}
