#include <stdio.h>

/**
* main - Print base 10 number from 0
* Return: return 0 if successful
*/

int main(void)

{

	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');

	return (0);
}
