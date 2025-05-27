#include <stdio.h>

void loop (int n){
    if ( n >= 0  )
    {
        printf("%d \n", n);
        loop (n - 1);
    }
}


int main(){

int numero = 10;
printf("Contagem regressiva\n");
loop (numero);

return 0;




//for (int i = 0, j = 10; i < j; i++, j--)
//{
//    printf("i = %d e j = %d\n", i, j);
//}

}