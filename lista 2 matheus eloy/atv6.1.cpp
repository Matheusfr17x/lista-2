#include <stdio.h>
#include <stdlib.h> //Essa biblioteca e a time s�o necessarias para as fun��es 
#include <time.h>


 int main(){
	int a,n1=10,n2=50,n3=1;
	
	srand(time(NULL)); //� para gerar um numero aleatorio todas as vezes que abrir o programa
	
	do
	{
		a=rand() % 100; // Vai gerar o numero entre 0 e 99
	}if(a==n1 || a==n2 || a==n3); //Vai sorteando at� que o "a" n�o seja um n�mero que eu defini
	
	 printf("%d e o numero sorteado",a);
	 
}
