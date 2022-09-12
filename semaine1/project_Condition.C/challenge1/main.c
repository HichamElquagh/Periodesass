#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fa,cels;
    printf("\t -----un programme qui transforme la temperature Fahrenheit en degre Celsius\n");
    printf("\t -----et affiche la sensation ressentie-----\n");
    printf("veuillez entrer la temperature en fahrenheit:\n");
    scanf("%lf",&fa);
    cels = (fa-32)/1.8;
    if (cels<0)
        printf(" \t TRES FROID");
        else if (cels<=20){
            printf("\t FROID");
        }
        else if (cels<=30){
            printf("\t CHAUD");
        }
        else {
            printf("\t TRES CHAUD");
        }

    return 0;
}
