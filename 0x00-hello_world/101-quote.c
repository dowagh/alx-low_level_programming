#include <unistd.h>

/**
* main - Prints "and that piece of art is useful" - Dora Korpa
* Return: return 0 if successful.
*/
int main(void)

{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (0);
}