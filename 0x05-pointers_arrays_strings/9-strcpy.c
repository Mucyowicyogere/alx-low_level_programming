#include <string.h>
/**
 * _strcpy - it copies the string pointed to by another buffer
 * @dst: Destination buffer
 * @src: String to be copyed
 * Return: The dest buffer address
 */
char *_strcpy(char *dst, char *src)
{
	strcpy(dst, src);
	return (dst);
}
