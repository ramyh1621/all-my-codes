#include <stdio.h>

int main()
{
       float rayon , pi , le_perimetre ;
       printf ("enter le rayon de circle : ");
       scanf ( "%f", &rayon);
       pi = 3.14;
       le_perimetre = 2 * rayon * pi;
       printf ("le perimetre de cette circle est : %.2f", le_perimetre);


return 0;
}