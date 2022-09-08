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
	printf("Size of a char is: %lu byte(s).\n", (unsigned long)sizeof(j));
       		 printf("Size of a int is: %lu byte(s).\n", (unsigned long)sizeof(i));
			printf("Size of a long int is: %lu byte(s).\n", (unsigned long)sizeof(x));
				printf("Size of a long long int is: %lu byte(s).\n", (unsigned long)sizeof(y));
					printf("Size of a float is: %lu byte(s).\n", (unsigned long)sizeof(z));
						return (0);
}	

