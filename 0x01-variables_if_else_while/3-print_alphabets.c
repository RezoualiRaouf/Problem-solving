#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the alphabet starting with a to b
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
putchar(letter);
}
for (letter = 'A' ; letter <= 'Z' ; letter++)
{
putchar(letter);
}
printf("\n");
return (0);
}
