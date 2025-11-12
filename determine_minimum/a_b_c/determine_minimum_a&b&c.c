
#include <stdio.h>
int main ()
{

     int a , b , c ;


     printf("Enter  three numbers to determine the minimum of them : ");
     scanf("%d %d %d",&a,&b,&c);

     if (a < b && a < c)
                         printf("The minimum is : %d ",a);
     else if (b < c)
                         printf("The minimum is : %d ",b);
     else
                         printf("The minimum is : %d ",c);
         

return 0;
}
