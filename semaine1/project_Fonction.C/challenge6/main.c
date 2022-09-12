#include <stdio.h>
#include <stdlib.h>

int main(){

    char mot[50], motinv[50];

    printf("\t ----un programme qui determiner si le mot est palindrome ou non\n");
    printf("entrer un nom:");
    scanf("%s",&mot);

    strcpy(motinv,mot);
    strrev(motinv);
    printf(" voila la nouvelle version: %s\n", motinv);

    if( !strcmp(mot,motinv)){
        printf("donc %s  est planidrome ",mot);
    } else {
        printf("donc %s  n'est pas planidrome",mot);
    }


    return 0;

}
