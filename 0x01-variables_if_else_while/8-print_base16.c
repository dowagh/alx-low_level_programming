#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase.
* Return: return 0 if successful
*/

int main(void)

{
	int n;
	char lowerCase;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)
		putchar(lowerCase);

	putchar('\n');

	return (0);
}
