#include "main.h"
/**
 * _strcmp - compare two strigs.
 *@s1: points to the first string.
 *@s2: points to the second string.
 *Return: integer positive if s1 > s2, negative if s1 < s2 , 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, sum = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] > s2[i])
	{
		sum = s1[i] - s2[i];
		break;
	}
	else if (s1[i] < s2[i])
	{
		sum = -(s2[i] - s1[i]);
		break;
	}
	else
	{
		sum = 0;
		i++;
	}
}
return (sum);

}
