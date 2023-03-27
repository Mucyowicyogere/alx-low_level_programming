#include <string.h>
/**
 * rev_string - it reverses a string
 * @str: String to be reversed
 * Return: void
 */
void rev_string(char *str)
{
	int l = strlen(str);
	int i, a;
	char tmp;

	a = l - 1;
	for (i = 0; i < l / 2; i++)
	{
		tmp = str[i];
		str[i] = str[a];
		str[a--] = tmp;
	}
}
