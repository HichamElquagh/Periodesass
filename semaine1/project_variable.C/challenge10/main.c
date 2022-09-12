#include <stdio.h>
#include <stdlib.h>

int main()
{
    double longueur,largeur,circon;
    printf("un programme qui calcule la circonference d'un rectangle.\n");
    printf("veuillez entrer  longueur de la rectangle : \n ");
    scanf("%lf",&longueur);
     printf("veuillez entrer largeur de la rectangle  :\n");
    scanf("%lf",&largeur);

    circon=(longueur + largeur)*2;
     printf("voila la circonference de ce rectangle est : %.2lf ",circon);
    return 0;
}
