#include <stdio.h>
#include <math.h>
int main()
{
                      int a , b , c, d , sum , dif , pro , quo ;
                      printf("Choose an operation ?\n");
                      printf("Enter 1 to calculate the sum of two numbers. \n");
                      printf("Enter 2 to calculate the difference of two numbers. \n");
                      printf("Enter 3 to calculate the product of two numbers.\n");
                      printf("Enter 4 to calculate the quotient of two numbers. \n");
                      printf("Enter the number of the operation do want : ");
                      scanf("%d",&d);
                      if (d == 1)
                      {
                            printf("Enter two numbers you want to find the sum of : ");
                            scanf("%d %d",&b , &c);
                            sum = b + c ;
                            printf("The result is : %d + %d = %d\n",b,c,sum);
                      }
                      else {if (d == 2){
                           
                                 printf("Enter two numbers you want to find the difference of : ");
                                 scanf("%d %d",&b , &c);
                                 dif = b - c;
                                 printf("The result is : %d - %d = %d\n",b , c, dif);
                      }
                           else if (d == 3){
                                
                                    printf("Enter two numbers you want to find the product of : ");
                                    scanf("%d %d",&b , &c);
                                    pro = b * c ;
                                    printf("The result is : %d x %d = %d",b,c,pro);
                           }
                                else { if(d==4){
                                    printf("Enter two numbers you want to find the quotient of : ");
                                    scanf("%d %d",&b , &c);
                                    quo = b / c ;
                                    printf("The result is : %d / %d = %d",b,c,quo);}
                                       else 
                                          printf("Sorry ,there is no operation with this number.");
                              }
                        }
                              
return 0;    
}