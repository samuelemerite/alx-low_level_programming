#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char tmp;
int i, len = strlen(s), len1 = strlen(s) - 1;
for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len1];
s[len1--] = tmp;
}
}
