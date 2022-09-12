#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double delta,a,b,c,x,x1,x2;
    printf(" \t ---un programme  calculer les solutions possible d’une équation 2eme degre---\n");
    printf("veuillez entres l'equation\n ");
    scanf("%lf%lf%lf",&a,&b,&c);
    delta=pow(b,2)-(4*a*c);
    resultat
    if(delta<0)

        printf("pas de solution");

    else if (delta==0){

        x= (-b)/2*a;
        printf(" l' equation admet une solution  : %.2lf ",x);
    }
     else {

        x1= (-b) +sqrt(delta)/(2*a);
        x2= (-b) -sqrt(delta)/(2*a);
        printf(" l' equation admet deux solutions\n");
        printf("le premier solution est: %.2lf \n",x1);
        printf("le deuxieme solution est: %.2lf \n",x2);
    }
    return 0;
}
