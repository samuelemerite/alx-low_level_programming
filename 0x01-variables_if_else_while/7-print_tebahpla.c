#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "zyxwvutsrqponmlkjihgfedcba";
int i=0;
for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
