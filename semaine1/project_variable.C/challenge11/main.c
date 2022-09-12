#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi=3.14;
    double r,circ;
    printf("un programme qui calcule  la circonference d'un cercle \n");
    printf("veuillez entrer le rayon du cercle:");
    scanf("%lf",&r);
    circ=2*pi*r;
      printf("\t voila la circonference du cercle est: %.2lf",circ);


    return 0;
}
