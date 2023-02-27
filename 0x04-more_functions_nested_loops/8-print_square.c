#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
int i = 0;
for (i = 1; i <= size; i++)
{
int j = 0;
for (j = 1; j <= size; j++)
{
putchar('#');
}
putchar('\n');
}
putchar('\n');
}
