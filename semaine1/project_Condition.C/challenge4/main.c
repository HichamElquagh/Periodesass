#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
    int a;
    int b;
    int somme,triple;

    printf("entrez le nombre a:");
    scanf("%d",&a);
    printf("entrez le nombre b :");
    scanf("%d",&b);

    somme = a+b;
    triple = 3*somme;
    if(a!=b ){

    	printf (" la somme de a et b est %d",somme);

	}else{

		printf("le triple est : %d",triple);
	}



	return 0;
}
