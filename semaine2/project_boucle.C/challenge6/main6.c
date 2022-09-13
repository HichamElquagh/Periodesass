#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmb,i,s,r;
    printf("\t------------------ HELLO ------------------\n");
    printf("\t veuillez entrer un nombre :\n");
    scanf("\t%d",&nmb);
    printf("\t------------------ RESULTAT ------------------\n");
    for(i=2; i<nmb; i++){
        for (r = 1; r<=i; r++)
        {
            if(i%r==0)
                s++;        
        }
        if(s==2)
            printf("\t%d :est  premier \n",i);
            else{
            printf("\t%d : n'est pas premier \n",i);
            }
        s=0;

    }
        return 0;
}
