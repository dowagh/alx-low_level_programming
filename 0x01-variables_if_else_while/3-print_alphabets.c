#include <stdio.h>

/**
* main - Prints the alphabet in lowercase and UPPERCASE
* Return: return 0 if successful
*/

int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
