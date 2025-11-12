#include <stdio.h>
#include <string.h>
int main()
{
                   char std[4]="yes";
                   int xprice , price , noc ;
                   printf("Are you a student ?");
                   scanf("%s",std);
                   if (strcmp(std,"yes")==0)
                   printf("%s",std);
                   else
                   printf("sorry");
return 0;
}