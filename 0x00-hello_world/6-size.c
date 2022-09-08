#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;
	long int x;
	long long int y;
	float z;
	printf("The size of an int is: %lu byte(s).\n", (unsigned long)sizeof(i));
        printf("The size of a char is: %lu byte(s).\n", (unsigned long)sizeof(j));
	printf("The size of a long int is: %lu byte(s).\n", (unsigned long)sizeof(x));
	printf("The size of a long long int is: %lu byte(s).\n", (unsigned long)sizeof(y));
	printf("The size of a float is: %lu byte(s).\n", (unsigned long)sizeof(z));
		return (0);
}	

