#include<stdio.h>
#include<stdlib.h>
int main(){
int nbr =1,res=0,i;


for ( i = 1; i <=10; i++){
    printf("veuillez entrer un nombre :");
scanf("%d",&nbr);
    if(nbr>0){
     res=res+nbr;
}
else{
    printf("veuillez entrer un nombre >0 :\n");
     i--;
}

}
printf("la somme de dix nombre premier est \n: %d",res);



return 0;
}
