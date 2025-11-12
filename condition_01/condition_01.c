#include <stdio.h>
int main()
{
          int a,b,c,sum,pro,dif;
          printf("donner la valeur de a : ");
          scanf("%d",&a);
          printf("donner la valeur de b : ");
          scanf("%d",&b);
          sum = a + b ;
          pro = a * b ;
          dif = a - b ;
          printf("la sum est : %d\n",sum);
        if (sum>=40)
           printf("le pro est : %d",pro);
        else
           printf("le dif est : %d",dif);
return 0;
}