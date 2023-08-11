#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the alphabet starting with a to z but with removing e q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
	if (letter == 'e' || letter == 'q')
	{
	++letter;
	}
	putchar(letter);
	}
	printf("\n");
	return (0);
}
