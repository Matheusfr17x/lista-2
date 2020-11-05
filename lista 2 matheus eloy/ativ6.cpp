    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    int main(void)
    {
      int i;
      int j;
      int k;
      printf("escolha ate que numero ira sortear :\n");
     scanf("%d", &j);
      
      for (i = 0; i < j; i++)
      {
        /* gerando valores aleatórios entre zero e j */
        printf("%d ", rand() % j);
      }
      int sorteio[j]{rand()};
      
      printf("\n escolha o numero  que voce deseja :\n");
       scanf("%d", &k);
       if(k==sorteio[j]){
       	printf("parabens seu numero foi sorteado :\n");
	   }
       
    
      return 0;
    }
