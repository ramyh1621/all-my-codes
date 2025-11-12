#include <stdio.h>
int main()
{
               int a ,i; 
               do {
               printf("enter a number <= 10 : ");
               scanf("%d",&a);
               }
               while (a<0||a>11);
               for ( i = 0 ; i<=10;i++)
               printf("%d * %d = %d \n ",a,i,a*i);
return 0;
}