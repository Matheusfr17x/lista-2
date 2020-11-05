#include <stdio.h>
#include <stdlib.h> //Essa biblioteca e a time são necessarias para as funções 

int main(void){
	
	int vet1 [10]{1,2,3,4,5,6,7,8,9,10};
    int x;
    int vet2 [10];
	int i;
	
	
	printf("escolha  o valor para ser multiplicado: \n");
	
	
	scanf("%d",&x);
	
	printf("digite os numeros do vetor\n");
	for (i=0;i<10;i++){
			
		scanf("%d",&vet1[i]);
		printf("vetor[%d]=%d\n",i,vet1[i]);
		
		vet2[i]=vet1[i]*x;
		
     	printf("vetor [%d] multiplicado por %d=%d\n",i,x,vet2[i]);
	}
		
}

