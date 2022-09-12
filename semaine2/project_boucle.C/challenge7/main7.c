#include <stdio.h>
#include <stdlib.h>

int main() {

  int i,nmbr,fib[100]={0,1};
  printf("veuillez entrer un nombre : ");
  scanf("%d",&nmbr);
  for(i=0;i<nmbr;i++){
        fib[i+2]=fib[i]+fib[i+1];

  }
  printf("voila le resultat est : %d ",fib[nmbr]);
  return 0;


}
