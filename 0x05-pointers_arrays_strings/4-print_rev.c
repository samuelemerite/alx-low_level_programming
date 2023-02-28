#include <stdio.h>
#include <string.h>


/**
 * print_rev - print a string reversed
 * @s: strint to reverse
 */

void print_rev(char *s)
{
int i = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
