#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(alpha[i]);
}
_putchar('\n');
return (0);
}
