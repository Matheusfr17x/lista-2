	#include <stdlib.h>
#include <math.h>
#include <stdio.h>


 
int main(){
		int vet1 [10];
		int vet2 [10];
		int i;
		
	for (i=0;i<10;i++){
		scanf("%d",&vet1[i]);
		if(vet1[i]<=0){
			vet1[i]=1;
		
		}
	
	}
	for (i=0;i<10;i++){
		printf("X[%d] = %d\n",i,vet1[i]);
	}
	return(0);
}
