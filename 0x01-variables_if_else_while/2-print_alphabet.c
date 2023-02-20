#include<string.h>
#include<stdlib.h>

/**main - print alphabet in lowercase
*followed by new line
*return: Always 0
*/
int main(void)
{
    char alpha[]="abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<26; i++)
    {
        putchar(alpha[i]);
    }
    putchar('\n');
    return 0;
}
