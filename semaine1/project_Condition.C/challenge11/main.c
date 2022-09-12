#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t ------------------ bonjour ------------------- `\n ");
    int h1,h2,m1,m2,s1,s2,k;
    printf("veuillez entrer le premier instant (HH:MM:SS,) : ");
    scanf("%d%d%d",&h1,&m1,&s1);
     printf("veuillez entrer la deuxieme instant (HH:MM:SS,): ");
    scanf("%d%d%d",&h2,&m2,&s2);
    printf("\t ------------------ RESULTAT  ------------------ \n");
    if (h1>h2)k=2;
    if(h1==h2&& m1>m2)  k=2 ;
        if(h1==h2&& m1==m2 && s1>s2) k=2;
         if(h1==h2&& m1==m2 && s1==s2) k=1;
        switch (k) {
        case  1: printf("Il s'agit du meme instant.");
        break;
        case  2: printf("Le premier instant vient avant le deuxieme");
        break;
        default : printf("Le deuxième instant vient avant le premier");

        }
    return 0;
}
