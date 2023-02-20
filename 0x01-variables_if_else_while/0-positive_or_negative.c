#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
//this program determine if number are positive or negative
//return zero at the end of programm if it working correctly
//srand take time and produce number randomly
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
       if(n>0)
       {
	 printf("%d is positive\n", n);
       }
       else if(n < 0)
       {
	 printf("%d is negative\n", n);
       }
       else
       {
          printf("0 is zero\n");
       }
	/* your code goes there */
    return (0);
}
