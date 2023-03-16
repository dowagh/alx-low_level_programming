#include<stdio.h>
/**
*main - prints size of types of variable
*Return: return if 0
*/
int main(void)
{
	char charType;
	int interType;
	long int interType;
	long long int interType;
	float floatType;

	printf("Size of char: %1u byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(interType));
	printf("Size of long int: %1u byte(s)\n", (unsigned long)sizeof(interType));
	printf("Size of long long int: %1u byte(s)\n", (unsigned long)sizeof(interType));
	printf("Size of float: %1u byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
