//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno.....: Gleiciane Tolentino

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

    //declara��o de variaveis
    int numeros[5], cont, somatorio=0, mult=1;

    //loop para receber os valores digitados pelo usuario
    for (cont=0; cont<5; cont++){
        printf ("Digite um numero [%d]: ", cont);
        scanf ("%d", &numeros[cont]);
    }

    //Somando os valores do vetor
    for (cont=0;cont<5;cont++) {
    somatorio = somatorio + numeros[cont];
    }

    //imprimindo a soma e o produto
    printf("O somatorio � = %d\n", somatorio);
    return 0;
}
