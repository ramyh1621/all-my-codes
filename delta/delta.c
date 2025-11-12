#include <stdio.h>
#include <math.h>
int main ()
{
                    float   a , b , c , delta , x1 , x2 , x ;
                            printf("The equation is : ax^2 + bx + c = 0\n");
                            printf("Enter the value of a : ");
                            scanf("%f",&a);
                            printf("Enter the value of b : ");
                            scanf("%f",&b);
                            printf("Enter the value of c : ");
                            scanf("%f",&c);
                            printf("To find the solutions we have to calculate Delta so :\n");
                            delta = b*b - (4 * a * c) ;
                            printf("Delta = %.2f\n",delta);
                                if (delta>0)
                                {
                                      x1 = ( -b + sqrt ( delta ) ) / ( 2 * a ) ;
                                      x2 = ( -b - sqrt ( delta ) ) / ( 2 * a ) ;
                                      printf("There are two solutions : \n");
                                      printf("x1 = %.2f\n",x1);
                                      printf("x2 = %.2f\n",x2);
                                }
                                else if ( delta < 0 )
                                     {
                                            printf("There are no solutions (because Delta<0)");
                                     }
                                     else
                                     {
                                            x = -b / (2 * a) ;  
                                            printf("There is only one solution, which is : x = %.2f \n",x);
                                     }
return 0;
}