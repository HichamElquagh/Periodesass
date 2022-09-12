#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha;
    printf("\t -----un programme qui determine la nature de caractere masculin ou feminin\n");
    printf("veuillez enter un alphabet :\n");
    scanf("%c",&alpha);

    if (alpha>='a' && alpha <='z')
        printf("  voila %c la nature est miniscule", alpha);
    else if (alpha>='A' && alpha <='Z'){
        printf("  voila  %c la nature est majuscule",alpha);
        }
        else {
            printf(" c*est pas un caractere ");
        }
    return 0;
}
