#include <string.h>
/**
 * _memcpy - A method to copy a memory area 
 * @dest: destination 
 * @src: source 
 * @n: bytes number
 * Return: The pointer pointing to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
