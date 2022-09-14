#include <stdio.h>
#include <stdlib.h>

int echanger(int x, int y){
  int z;
  z=x;
  x=y;
  y=z;
    printf("voila la nouvelle valeur de A est : %d \n",x);
    printf("voila la nouvelle valeur de B est : %d \n",y);

}

int main()
{
    int a,b;
        printf("\t-----------------CALCULE LA SOMME-----------------\n");
    printf("veuillez entrer la valeur de A  : \n");
    scanf("%d",&a);
    printf("veuillez entrer la valeur de B : \n");
    scanf("%d",&b);
    printf("\t-----------------ETAT INITIAL-----------------\n");
    printf("la valeur de A est : %d \n",a);
    printf("la valeur de B est : %d \n",b);
    printf("\t-----------------RESULTAT-----------------\n");
    printf(echanger(a,b));
}
