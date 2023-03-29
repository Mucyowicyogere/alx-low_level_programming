#include <string.h>
/**
 * _strncat - A function to concatenate 2 strings but uses n bytes from src
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes to be considered from the second string
 * Return: concantenaton of 2 string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
