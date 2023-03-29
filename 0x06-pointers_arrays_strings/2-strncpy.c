#include <string.h>
/**
 * _strncpy - A method to copy a part of a string
 * @dest: string destined to host string/buffer
 * @src: a string to copy
 * @n: bytes to be copied
 * Return: Return @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
