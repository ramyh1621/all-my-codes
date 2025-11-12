#include <stdio.h>
int main()
{
          int s,n,i;
          do {
           printf("Enter a number :");
           scanf("%d",&n);}
          while (n<0 || n > 10);
            for ( i = 0 ; i <= 10 ; i++)
           printf("%d * %d = %d\n",n, i,n*i);
    return 0;}