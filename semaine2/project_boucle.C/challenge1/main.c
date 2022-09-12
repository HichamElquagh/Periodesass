#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("\t --------------------LA MULTIPLICATION--------------------\n");
    printf("veuillez entrer un nombre : \n");
    scanf("%d",&n);
    printf("\t ----------------RESULTAT----------------\n");
    for(i=1;i<=10;i++){

        printf("\t %d x %d  =%d \n",n,i,n*i);
        }
    return 0;
}

