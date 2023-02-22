#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "0123456789abcdef";
int i = 0;
for (i = 0; i < 16; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
