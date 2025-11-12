#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
                int n,secret ;
                srand(time(NULL));
                secret = rand()% 50 + 1 ;
                printf("I choosed a number between 1 and 50 \n");
                printf("You have to guess my choice\n");
                do {
                  printf("\nyour choice : ");
                  scanf("%d",&n);
                  if (n < secret)
                     printf("wrong, the secret is bigger than %d\n",n);
                  else if (n > secret)
                           printf("wrong, the secret is smaller then %d\n",n);
                }while (n != secret);
                    
                printf("Correct, you won ||| -CONGRATULATION- , the secret was : %d\n",n);

    return 0;
}