#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by a new line
 * but for multiples of 3 print fizz instead of the number
 * and for multiples of 5 print buzz
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100, i++)
{
if ( i % 3 == 0 && i % 5 != 0)
{
printf("fizz");
}
else if ( i % 5 == 0 && i % 3 != 0)
{
printf("buzz");
}
else if ( i % 5 == 0 && i % 3 == 0)
{
printf("fizzbuzz");
}
else if ( i == 1)
{
printf("%d", i);
}
else
{
printf("%d", i);
}
printf("\n");
return (0);
}
}
