#include<stdio.h>


/**main - print alphabet in lowercase
*followed by new line
*return: Always 0
*/
int main(void)
{
    char alpha[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
    int i=0;
    for(i=0; i<53; i++)
    {
        putchar(alpha[i]);
    }
    putchar('\n');
    return 0;
}
