#include <string.h>
/**
 *_memcpy - A function to copy a memory area from one string to another
 *@dest: The destination string
 *@src: The source string
 *@n: Number of bytes to copy
 *Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
