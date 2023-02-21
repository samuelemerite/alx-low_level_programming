#include<stdio.h>



/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "0123456789";
int i = 0;
for ( i = 0; i < 10; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
