#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int so,s,m;
    float d,mod;
    printf("un programme qui fait les calcules \n ");
    printf("veuillez entrer un Nombre : \n ");
    scanf("%d",&a);
    printf("veuillez entrer un autre Nombre : \n ");
    scanf("%d",&b);
    so=a+b;
    s=a-b;
    m=a*b;
    d=a/b;
    mod=a%b;
    printf("voila la somme est: %d \n",so);
    printf("voila la sostractions est: %d  \n",s);
    printf("voila la multiplication est: %d  \n",m);
    printf("voila la division  est: %.2f  \n",d);
    printf("voila le mod est: %.2f  \n",mod);
    return 0;
}
