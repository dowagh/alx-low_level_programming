#include <stdio.h>

/**
*main -
*Return: return 0 f successful
*/

int main(void)
{
	char lowerCase = 97;

	while (lowerCase <= 122)
	{
	putchar(lowerCase);
	lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
