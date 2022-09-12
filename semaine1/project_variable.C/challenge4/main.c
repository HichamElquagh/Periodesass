#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metre,mile,KM;
    printf("\t un programme qui demande  la distance en Mile et la transforme en Metre \n");
    printf("entrer la distance en Mile: \n");
    scanf("%f",&mile);
    KM=mile/1.609;
    metre= KM*1000;
    printf(" \t voila la distance en Metre est : %.2fm ",metre);
    return 0;
}
