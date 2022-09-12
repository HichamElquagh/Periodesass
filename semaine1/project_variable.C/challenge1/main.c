#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20],prenom[20],sexe[20];
    int age,telephone;

    printf("un programme qui affiche vos anformations personnelles \n");
     printf("\n");
    printf("veuillez entrer votre nom: \n");
    gets(nom);
    printf("veuillez entrer votre prenom: \n");
    gets(prenom);
    printf("veuillez entrer votre sexe ( homme ou femme ): \n");
    gets(sexe);
    printf("veuillez entrer votre age: \n");
    scanf("%d",&age);
    printf("veuillez entrer votre TEL: \n");
    scanf("%d",&telephone);
    printf("\n");
    printf("\t\tvoila votre nome est: %s \n",nom);
    printf("\t\tvoila votre nome est: %s \n",prenom);
    printf("\t\tvoila votre nome est: %s \n",sexe);
    printf("\t\tvoila votre nome est: %d \n",age);
    printf("\t\tvoila votre nome est: %d \n",telephone);
    return 0;
}
