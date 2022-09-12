#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmb,nmbrinv;
    printf("veuillez entrer un nombre : ");
    scanf("%d",&nmb);

    while(nmb !=0){
            nmbrinv=nmbrinv*10;
            nmbrinv= nmbrinv+nmb%10;
            nmb=nmb/10;

    }
    printf("l'inverse de nombre est %d",nmbrinv);

    return 0;
}
