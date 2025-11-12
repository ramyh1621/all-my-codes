#include <stdio.h>
int main ()
{

     int a , b ;


     printf("Enter  two numbers to determine the minimum of them : ");
     scanf("%d %d",&a,&b);

     if (a < b)
         printf("The minimum is : %d ",a);
     else
         printf("The minimum is : %d ",b);
        getch();

return 0;
}
