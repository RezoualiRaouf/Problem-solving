#include "main.h"

int add(int a, int b)
{
int sum;
if (a >= 0 && b >= 0)
{
	sum = a + b;
}
else if (a < 0)
{
	a = a * (-1);
	sum = b - a;
}
else if (b < 0)
{
	b = b * (-1);
	sum = a - b;

}else if (a < 0 && b < 0)
{
	sum = a + b;

}
return (sum);
}
