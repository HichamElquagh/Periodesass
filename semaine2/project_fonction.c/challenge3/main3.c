#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


bool isPremier(int n){
int i,s=0;
for(i=1;i<=n;i++){
    if(n%i==0)
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
    int a;
    printf("veuillez entrer un nombre : \n");
    scanf("%d",&a);
    if (isPremier(a)== true)
        printf("voila %d est premier",a);
    else{
        printf("voila %d n'est pas premier",a);
    }
    return 0;
}
