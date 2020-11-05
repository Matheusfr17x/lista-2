#include "bibliotecamatriz1.h"
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, maior=0, menor=0;
    float Notas[10];

    printf("digite 10 valores");
    printf("\n");
    for (a=0;a<10;a++){
      printf("vetor [%d] : ", a+1);
      scanf("%f", &Notas[a]);
      if(a==0){maior=Notas[a];menor=Notas[a];}
      if(Notas[a]>maior){
        maior=Notas[a];
      }
      else{
        if(Notas[a]<menor){
            menor=Notas[a];
        }
      }
    }
    printf("\no maior valor e %d\n", maior);
    printf("\ne o menor valor e %d\n\n", menor);
    system("pause");
    return 0;
}
