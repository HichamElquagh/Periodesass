#include <stdio.h>
#include <stdlib.h>


int main() {
	
	   int n,i,n1;
	   printf("\t--------------------------BONJOUR--------------------------\n");
	   printf("\t veuillez entrer le nombre des linges de la pyramide d'étoile : \n");
	   scanf("%d",&n);
	   
	   for(i=0;i<n;i++){
	   	

	   	for(n1=0;n1<=i;n1++){
	   		
	   		printf("*");
	   	
	   }
	   printf("\n");
			   }
	   		
	
	return 0;
}
