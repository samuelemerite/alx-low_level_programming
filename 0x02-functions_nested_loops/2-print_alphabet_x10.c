include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int i = 0, j = 0;
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(alpha[i]);
}
 _putchar('\n');
}
}
