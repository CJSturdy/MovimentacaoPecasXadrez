#include <stdio.h>

void loop (int n){
    if ( n > 0  )
    {
        loop (n - 1);
        printf("%d \n", n);
    }
}


int main(){

int numero = 10;
printf("Contagem regressiva\n");
loop (numero);

return 0;
}