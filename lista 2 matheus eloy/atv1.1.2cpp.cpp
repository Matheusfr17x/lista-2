//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno.....: Gleiciane Tolentino

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

    //declaração de variaveis
    int numeros[5], impar=0, cont, somatorio=0, mult=1;

    //loop para receber os valores digitados pelo usuario
    for (cont=0; cont<5; cont++){
        printf ("Digite um numero [%d]: ", cont);
        scanf ("%d", &numeros[cont]);
        if(numeros[cont]%2==1){
		
        printf("este numero e inpar = %d\n",numeros[cont]%2==1 );
        impar++;
		}
    }


    //imprimindo a impar
    printf("neste vetor ha = %d numeros impares\n", impar);
    return 0;
}
