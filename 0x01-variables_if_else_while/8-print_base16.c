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

for (letter = '0' ; letter <= '9' ; letter++)
{
putchar(letter);
}
for (letter = 'a' ; letter <= 'f' ; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
