#include <stdio.h>
#include <stdlib.h>

int main()
{
     float fahrenheit,cels;
    printf("\t un programme qui demande la temperature en Fahrenheit et la transforme en degre Celsius\n ");

    printf (" veuillez entrer la temperature en Fahrenheit:\n ");
    scanf("%f",&fahrenheit);
    cels=(fahrenheit-32)/1.8;
    printf("voila la temperature en Celsius: %0.2f ",cels);
    return 0;
}
