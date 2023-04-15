#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - to print its name
*@argc: args number
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[])
{
	int coins, ar;

	coins = 0;
	ar = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ar = atoi(argv[1]);
	
	if (ar <= 0)
		printf("%d\n", 0);
	while(ar > 0)
	{
		if (ar >= 25)
		{
			coins = coins + 1;
			ar = ar - 25;
			continue;
		}
		if (ar >= 10)
		{
			ar -= 10;
			coins += 1;
			continue;
		}
		if (ar >= 5)
                {
                        ar -= 5;
                        coins += 1;
                        continue;
                }
		if (ar >= 2)
                {
                        ar -= 2;
                        coins += 1;
                        continue;
                }
		if (ar >= 1)
                {
                        ar -= 1;
                        coins += 1;
                        continue;
                }
	}
	printf("%d\n",coins);

	return (0);
}
