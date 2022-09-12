#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int j;
    printf("\t---- un programme qui affiche d'une maničre aleatoire un des jours de la semaine----\n");
    j=time(NULL);
    j= j%7;
    switch (j)
    {
    case 1 :
        printf("lundi");
        break;

        case 2 :
        printf("mardi");
        break;

        case 3 :
        printf("mercredi");
        break;

        case 4 :
        printf("jeudi");
        break;

        case 5 :
        printf("vendredi");
        break;

         case 6 :
        printf("samedi");
        break;

        case 7 :
        printf("dimanche");
        break;

    }

    return 0;
}
