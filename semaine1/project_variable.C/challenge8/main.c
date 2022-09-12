#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    double somme,moyenne;

    printf("un programme qui calcule la somme est la moyenne \n ");
    printf("veuillez entrer quatre nombre \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    somme=a+b+c+d;
    moyenne=somme/4;
    printf(" voila la somme de ces quatre nombre est : %.2lf \n",somme);
    printf(" voila la moyenne de ces quatre nombre est : %.2lf \n",moyenne);

    return 0;
}
