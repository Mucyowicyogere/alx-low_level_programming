#include <string.h>
/**
 * _memset - A function to fill the first n bytes of a string by a constant
 * @s: String to be filled
 * @b: Character to use to fill
 * @n: Number of bytes to fill
 * Return: Pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
