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

	printf("Size of char is : %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int is : %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int is : %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int is : %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of float is : %lu bytes(s)", (unsigned long)sizeof(f));
	return (0);
}
