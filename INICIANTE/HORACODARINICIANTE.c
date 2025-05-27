#include <stdio.h>


int main (){




//int i = 0;

//while (i <= 10)
//{
  //  if (i % 2 == 0){
   // printf(" o número é %d\n", i);
   // }
    //i++;
//}

//int numero;

//do
//{
    //printf(" Escolha um número: ");
    //scanf("%d", &numero);
    //if (numero % 2 == 0)
    //{
    //    printf("O número %d é par", numero);
    //} else
    //{
      //  printf("O número %d é impar\n", numero);
    //}
    
    
//} while (numero % 2 != 0);

int num, i;

    printf("Escolha um número de 1 a 10: ");
    scanf("%d", &num);

    for ( i = 0; i <= 10; ++i)
    {
        printf("%d X %d = %d\n", i, num, i * num);
    }
    

return 0;










}