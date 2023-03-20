#include <stdio.h>

/**
*main - Prints the lowercase alphabet in rev
*Return: returns 0 if successful
*/

int main(void)

{

	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
