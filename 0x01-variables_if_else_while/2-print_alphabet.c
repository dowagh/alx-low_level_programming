#include <stdio.h>

/**
*main - Prints the alphabet in lowercase.
*Return: return 0 if successful
*/

int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);

	putchar('\n');

	return (0);
}
