#include <stdio.h>
        //definindo a recursividade do loop da torre e declarando a condição
void looptorre (int t){
    if ( t > 0 )
    {
    // invertendo a ordem para que seja executado em forma de pilhagem e a torre ande de forma crescente
    looptorre (t - 1);
    printf("A torre se moveu %d casas para direita\n", t);

    } 
}
    
        //definindo a recursividade do loop de bispo declarando a condição
void loopbispo (int b){

    if( b > 0)
    
    {
        loopbispo (b -1);
  
        // invertendo a ordem para que seja executado em forma de pilhagem e o bispo ande de forma crescente
        
        
        // Loop externo (vertical)
        for(int vertical = 1; vertical <= b; vertical++) {

            // Loop interno (horizontal)
            for(int horizontal = b; horizontal <= b; horizontal++) {

                if(vertical == horizontal) {  // Apenas quando vertical e horizontal são iguais
                printf("O Bispo moveu %d casa(s) para cima e %d para direita\n", 
                           vertical, horizontal);
                        
                }
            }
        }
        printf("Total: %d casas na diagonal\n", b);
    }
}


    //definindo a recursividade do loop da Rainha e declarando a condição
    void looprainha (int r){
        if (r > 0)
        {
            // invertendo a ordem para que seja executado em forma de pilhagem e a Rainha ande de forma crescente
    looprainha (r - 1);
    printf("A Rainha se moveu %d casas para esquerda\n", r);

    }  // total das casas andadas pela Rainha
    
}     

//definindo a recursividade do loop do cavalo e declarando a condição
void loopcavalo(int i) {
    if (i > 0) {
        printf("Iniciando movimento do cavalo...\n");
        
        // Movimento para cima (2 casas)
        for (int j = 1; j <= 2; j++) {
            printf("Andou %d casa(s) para cima\n", j);
        }
        
        // Movimento lateral (1 casa)
        printf("Depois andou uma casa para o lado direito\n");
    }
}

int main(){

 // Declarando o valor da variavel e do número de casas a andar
    int torre = 5;
    printf("Contagem de casas da torre\n");
    looptorre (torre);

 // complemento para ficar visualmente mais completo
            printf("Finalizou a jogada\n\n");


// definido o numero de casas
    int bispo = 5;
    printf("Contagem de casas do bispo\n");
    loopbispo (bispo);

// complemento para ficar visualmente mais completo
            printf("Finalizou a jogada\n\n");

            
// Declarando o valor da variavel e do número de casas a andar
    int rainha = 8;
    printf("Contagem de casas da Rainha\n");
    looprainha (rainha);

 // complemento para ficar visualmente mais completo
            printf("Finalizou a jogada\n\n");


// Declarando o valor da variavel e do número de casas a andar
    int cavalo = 1;
    printf("Contagem de casas da cavalo\n");
    loopcavalo(cavalo) ;

 // complemento para ficar visualmente mais completo
            printf("Finalizou a jogada\n\n");

return 0;
}