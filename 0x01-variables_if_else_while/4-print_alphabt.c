#include<stdio.h>


/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char alpha[] = "abcdfghijklmnoprstuvwxyz";
int i = 0;
for(i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
