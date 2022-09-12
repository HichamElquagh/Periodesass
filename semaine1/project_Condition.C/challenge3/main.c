#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\t----- un programme qui permute les deux variables\n");
    printf("veuillez entrer le premier nombre A:\n");
    scanf("%d",&a);
     printf("veuillez entrer le deuxieme nombre B:\n");
    scanf("%d",&b);
    if(a==b)
        printf("permutation impossible");
    else if ( a<b){
         printf("permutation impossible");}
         else {
            c=a;
            a=b;
            b=c;
            printf("donc la nouvelle valeur de A:%d \n ",a);
            printf("donc la nouvelle valeur de B:%d \n ",b);
         }
    return 0;
}
