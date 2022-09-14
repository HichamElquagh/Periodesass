#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int res1;
bool divededby(int x,int y ){
 int i,s=0;
 res1 =x/y;

 for(i=1;i<=res1;i++){
        if(res1%i==0)
        s++;
}
 if (s==2)
    return true;
 else{
    return false;
 }
}
int main()
{
    int a ,b;
    printf("veulliez entrer un nombre : \n");
    scanf("%d",&a);
    ici :
    printf("veulliez entrer un nombre : \n");
    scanf("%d",&b);
    if (b<=0)
    {
        goto ici ;
    }
    
    printf("\t--------------RESULTAT--------------\n");
    if (divededby(a,b)==true)
        printf("voila le reste de la division %d est premier", res1);
    else{
        printf("voila le reste de la division %d n'est pas premier" , res1);
    }

    return 0;
}
