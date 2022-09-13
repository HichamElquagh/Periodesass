#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ps,ex,i =0,res=1;
    printf("\t------------------ HELLO ------------------\n");

    do {
        printf("\t veuillez entrer un nombre >0 :\n");
    scanf("\t%d",&ps);
    } while(ps<0);
    do {
        printf("\t veuillez entrer l'exposant >=0 :\n");
    scanf("\t%d",&ex);

    } while(ex<=0);

    while (ps>0 && ex>=0)  {

            if (ex==0)  {
                res=res*1;
                ex--;
                 }
                 else{
                    res=res*ps;
                    ex--;
                 }

    }

     printf("la puissance est : %d\n",res);
     return 0;
}
