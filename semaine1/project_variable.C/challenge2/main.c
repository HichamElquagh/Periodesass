#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fa,ce;
    printf("\t un programme qui demande  la temperature en Fahrenheit et la transforme en degre Celsius \n");
    printf("\n");
    printf("entrer la temperature en fahrenheit:\n");
    scanf("%f",&fa);
    ce=(fa-32)/1.8;

    printf("\tvoila la temperature en fahrenheit est: %.2f",ce);

    return 0;
}
