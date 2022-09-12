#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,i,div;
	printf("\t ------------ un programme qui determine si le nombre est premier ou non ------------\n ");
	printf("veuillez enter un nombre: ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		
		if(n%i==0)
			div++;
			
		}
		if (div==2)
		printf("ce nombre est premier");
		else{
			printf("  n'est pas premier \n");
		}
		
	
	
	
	
	return 0;
}
