#include <stdio.h>
#include <stdlib.h> //Essa biblioteca e a time são necessarias para as funções 
#include <time.h>


 int main(){
	int a,n1=10,n2=50,n3=1;
	
	srand(time(NULL)); //É para gerar um numero aleatorio todas as vezes que abrir o programa
	
	do
	{
		a=rand() % 100; // Vai gerar o numero entre 0 e 99
	}if(a==n1 || a==n2 || a==n3); //Vai sorteando até que o "a" não seja um número que eu defini
	
	 printf("%d e o numero sorteado",a);
	 
}
