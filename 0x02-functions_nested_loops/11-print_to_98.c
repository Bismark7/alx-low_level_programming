#include <stdio.h>
/**
 *print_to_98 - print n times to 98
 *@n: variable to run the computation to 98
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d" n);
printf("\n");
break;	}
else
{
printf("%d, ",n);
}
}
else
{
for (; n >= 98; n--)
if (n == 98)
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
