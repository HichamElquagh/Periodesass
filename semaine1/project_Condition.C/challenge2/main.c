#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
      printf("\t ----un programme qui affiche si ce nombre est paire ou impaire\n");
    printf("\t veuillez entrer un nombre: \n ");
    scanf("%d",&nombre);

    if (nombre%2!=0)
        printf("ce nombre est impaire");
    else {
        printf("ce nombre est pair");
    }



    return 0;
}
