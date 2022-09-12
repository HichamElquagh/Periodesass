#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,m;
    printf("\t --- un programme qui affiche la mention obtenue --- \n ");
    printf("veuillez entrer vos trois note \n");
    printf(" la premier note :");
    scanf("%lf",&n1);
    printf(" la deuxieme note :");
    scanf("%lf",&n2);
    printf(" la troisieme note :");
    scanf("%lf",&n3);
    printf ("\t-------------------RESULTAT-------------------\n");
    m=(n1+n2+n3)/3 ;
    if (m<10)
            printf("RECALE");
    else if (m<=12){
        printf("passable");
    }
    else if (m<=14){
        printf("ASSEZ BIEN");
    }
    else if (m<16){
        printf("BIEN");
    }
    else {
        printf("TRES BIEN");
    }


    return 0;
}
