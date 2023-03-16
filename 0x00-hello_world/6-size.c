#include<stdio.h>
/**
*main - prints size of variables
*Return: return if 0
*/
int main(void)
{
	char charType;
	int interType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(interType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
