#include <stdio.h>

/**
* main - Prints the alphabet in lowercase  except for q and e
* Return: return 0 if successful
*/

int main(void)

{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != 'e' && lowerCase != 'q')
			putchar(lowerCase);
	}

	putchar('\n');

	return (0);
}
