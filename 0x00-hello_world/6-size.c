#include <stdio.h>
/**
 * main - A program that prints the size of various data types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	float f;
	long int c;
	long long int d;

	printf("The size of char is : %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of int is : %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("The size of float is : %lu bytes(s)\n", (unsigned long)sizeof(f));
	printf("The sixe of long int is : %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("The size of long long int is : %lu bytes(s)\n", (unsigned long)sizeof(d));
	return (0);
}
