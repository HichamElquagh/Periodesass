#include <stdio.h>
#include <stdlib.h>


int add(int x ,int y){
 int som;
 som=x+y;
 return som;

}



int main()
{
    int a,b;
    printf("\t-----------------CALCULE LA SOMME-----------------\n");
    printf("veuillez entrer un nombre : \n");
    scanf("%d",&a);
    printf("veuillez entrer un autre nombre : \n");
    scanf("%d",&b);
    printf("\t-----------------RESULTAT-----------------\n");
    printf("voila : %d + %d = %d ",a,b, add(a,b) );
    return 0;
}
