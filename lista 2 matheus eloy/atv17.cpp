#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdio.h>
int main(void){

		float  vet[4];
		int i;
		
		for(i=0;i<=4;i++){
		scanf("%f",&vet[i]);
	
		}
		if(vet[0]<vet[1]&&vet[2]&&vet[3]&&vet[4]){
		
		
		vet[0]=0;
	}
			if(vet[1]<vet[0]&&vet[2]&&vet[3]&&vet[4]){
	
		
		vet[1]=0;
}
			if(vet[2]<vet[1]&&vet[0]&&vet[3]&&vet[4]){
		
		
		vet[2]=0;
}
			if(vet[3]<vet[1]&&vet[2]&&vet[0]&&vet[4]){
		

		vet[0]=0;
}
			if(vet[4]<vet[1]&&vet[2]&&vet[3]&&vet[0]){
		

		vet[4]=0;
	}
	
	
		if(vet[0]>vet[1]&&vet[2]&&vet[3]&&vet[4]){
	
		
		vet[0]=0;
}
			if(vet[1]>vet[0]&&vet[2]&&vet[3]&&vet[4]){
		
		
		vet[1]=0;
	}
			if(vet[2]>vet[1]&&vet[0]&&vet[3]&&vet[4]){
		
		
		vet[2]=0;
	}
			if(vet[3]>vet[1]&&vet[2]&&vet[0]&&vet[4]){
		
		
		vet[0]=0;
	}
			if(vet[4]>vet[1]&&vet[2]&&vet[3]&&vet[0]){
		
		
		vet[4]=0;
	}
	printf("%.1f",vet[0]+vet[1]+vet[2]+vet[3]+vet[4]);
	return(0);
	}
