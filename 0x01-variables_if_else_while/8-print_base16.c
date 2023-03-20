#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase.
* Return: return 0 if successful
*/

int main(void)

{

	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)
	{
		putchar(lowerCase);
	}

	putchar('\n');

	return (0);
}
