#include <stdio.h>
#include <stdlib.h> //Essa biblioteca e a time são necessarias para as funções 
#include <time.h>
int main(void){
	
	int vet1 [10]{1,2,3,4,5,6,7,8,9,10};
    int vet2 [10]{1,2,3,4,5,6,7,8,9,10};
    int vet3 [10];
	int i;
	
	for (i=0;i<10;i++){
		
		vet3[i]=vet1[i]+vet2[i];
		
		printf("a soma dos 2 vetores sao %d \n",vet3[i]);
	}
}

