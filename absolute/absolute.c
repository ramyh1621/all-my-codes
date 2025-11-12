 #include <stdio.h>
int main ()
{
        int a , absolute ;
        printf("enter the number whose absolute value you want : ");
        scanf("%d",&a);
        absolute = abs(a);

        printf("the absolute value of the number %d is : %d", a ,absolute);

return 0;
}