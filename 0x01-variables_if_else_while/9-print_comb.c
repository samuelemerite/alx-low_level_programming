#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
for (i = 48; i < 58 ; i++)
{
putchar(i);
if (i + 1 != 58)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
