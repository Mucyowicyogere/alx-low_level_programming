#include <string.h>
#include <stdio.h>
#include <math.h>

/**
 * tick - string counter.
 * @s: string
 *
 * Return: string length.
 */
int tick(char *s)
{
	if (!*s)
		return (0);
	else if (*s)
		return (tick((s + 1)) + 1);
	return (0);
}
/**
 * track_pali - method to assist is_palindrom
 * @s: string
 * @fore: front index.
 * @back: back index.
 *
 * Return: 1 or  0.
 */
int track_pali(char *s, int fore, int back)
{
	if (s[fore] != s[back])
		return (0);
	if ((s[fore] == s[back] && fore == back))
		return (1);
	else if ((s[fore] == s[back] && fore > back))
		return (1);
	else
		return (track_pali(s, fore + 1, back - 1));
}
/**
 * is_palindrome -  palindrome checking
 * @s: string
 *
 * Return: 1 if palindrome or 0
 */
int is_palindrome(char *s)
{
	int i = 0;

	if (*s)
	{
		i = tick(s);
		return (track_pali(s, 0, i - 1));
	}
	if (!(*s))
		return (1);
	return (0);
}

