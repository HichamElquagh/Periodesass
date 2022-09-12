#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmb,i,s=0;
    printf("\t------------------ HELLO ------------------\n");
    printf("\t veuillez entrer un nombre :\n");
    scanf("\t%d",&nmb);
    printf("\t------------------ RESULTAT ------------------\n");
    for(i=2;i<=nmb;i++){
        if(i%2==0)
            printf("\t%d : n'est pas  premier \n",i);
            else{
            printf("\t%d : est  premier \n",i);
            }


    }
        return 0;
}
