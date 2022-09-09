#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void)
{
char new_alphabet;
	for (new_alphabet = 122; new_alphabet >= 97; new_alphabet--)
	{ 
		putchar(new_alphabet);
	}
	putchar('\n');
	return (0);
}			
