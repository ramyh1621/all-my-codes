#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
                float myn ,alg ,ana ,sm ,phi ,ll ,alj ,eng ;
                float malg ,malj ,mll ,mphi ,mana ,meng ,msm ,result ;

                    printf("Entrer la note de Algorithme : ");
                    scanf("%f",&alg);

                    printf("Entrer la note de Analyse : ");
                    scanf("%f",&ana);

                    printf("Entrer la note de Stricture machine : "); 
                    scanf("%f",&sm);

                    printf("Entrer la note de Aljebre : ");
                    scanf("%f",&alj);

                    printf("Entrer la note de Physics : ");
                    scanf("%f",&phi);

                    printf("Entrer la note de Logiciel Libre : ");
                    scanf("%f",&ll);

                    printf("Entrer la note de Englais : ");
                    scanf("%f",&eng);

                            malg = alg * 6 ;
                            mana = ana * 5 ;
                            msm  = sm  * 4 ;
                            malj = alj * 4 ;
                            mphi = phi * 3 ;
                            mll  = ll  * 3 ;
                            meng = eng * 2 ;


                        myn = (malg + malj + mll + mphi + meng + mana + msm) ;
                    printf("les resultats est : \n");
                    printf("Algorithme : %.2f\nAnalyse : %.2f\nStricture machine : %.2f\nAljebre : %.2f\nPhysics : %.2f\nLogiciel libre : %.2f\nEnglais : %.2f\n",alg,ana,sm,alj,phi,ll,eng);

                        printf("total est : %.2f\n",myn);

                        result = (myn / 27) ;

                    printf("La moyenne est : %.2f /20",result);
            getch();
return 0;
}