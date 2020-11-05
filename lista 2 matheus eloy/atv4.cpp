#include <stdio.h>
    
    int main(void)
    {
        int quantidade, i;
        int par=0;
		int valores;
        scanf("%d", &quantidade);
        float somapar = 0.00;
        i = 0;
        while (i < quantidade)
       {
           scanf("%d", &valores);
           i = i + 1;
       
           if(valores%2==0){
		    while (valores%2==0){
		    	par = par + 1;
			}
           somapar = somapar + valores/par;
           
       }
   
	   
	 printf("numero de par %d=",par);
     printf("pares: %.2f", somapar);
      return 0;
   
}
}

