#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metre,mile;
    printf("\t un programme qui demande  la distance en Metre et la transforme en Mile \n");
    printf("entrer la distance en Metre: \n");
    scanf("%f",&metre);
    mile=(metre/1000)*1.609;
    printf(" \t voila la distance en Mile : %.2fm ",mile);
    return 0;
}
