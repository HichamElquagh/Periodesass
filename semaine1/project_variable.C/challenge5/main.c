#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit,cels;
    printf("\t un programme qui demande la temperature en Fahrenheit\n ");
    printf ("\t et la transforme en degre Celsius et affiche la sensation ressentie\n ");
    printf (" veuillez entrer la temperature en Fahrenheit:\n ");
    scanf("%f",&fahrenheit);
    cels=(fahrenheit-32)/1.8;
    if(cels<0)
        printf("TRES FROID");
    else if(cels<=20){
        printf("FROID");
    }
     else if( cels<=30){
        printf("CHAUD");
    }
     else
        printf("TRES CHAUD");

    return 0;
}
