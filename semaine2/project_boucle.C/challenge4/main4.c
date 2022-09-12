#include <stdio.h>
#include <stdlib.h>
int main(){
	
		int nmbr=0,max=0 ,somme=0;
		
		printf("\t -------------un programme qui affiche la somme et le max des nombres-------------|\n");
		do{
			if(max<nmbr){
			
				max=nmbr;
			}
			somme=somme+nmbr;
			
			printf("veuillez entrer un nombre entre 1 et 100 :");
			scanf("%d",&nmbr);
	
		}while(nmbr>0 && nmbr<100);
		printf("la somme est %d le max est %d",somme,max);
			
			
			
			
			
		return 0;
   	}
