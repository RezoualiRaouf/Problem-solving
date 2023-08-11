#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the alphabet starting with z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
