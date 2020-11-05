#include<stdio.h>
	int main(void){
        int n, i;
		int val;
		float somaimpar;
        float soma;
        scanf("%d", &n);
     soma = 0;
     i = 0;
     float impar=0;
     float par=0;
     while (i < n)
        {
         scanf("%d", &val);
         i = i + 1;
         
         if(val%2==0){
		 par=par+1;
         soma =soma + val;
         
		 }
         else{
		 
         	 impar=impar+1;
         somaimpar =somaimpar + val;
		 
		 }
     }
     
   
   printf("media Pares: %.2f\n",soma/par);
    printf("Ha %.2f par(es)\n",par);
     return 0;
}
