#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int lancamento_moeda();

int main() {
    int i, cara_count = 0;

    
   srand(time(NULL)); // para iniciar o gerador de numeros aleatoriós com uma semente diferente

     for (i = 0; i < 100; i++) {
        int resultado = lancamento_moeda();
        if (resultado == 0)
            printf("Coroa\n");
        else
            printf("Cara\n");

        
        if (resultado == 1)
            cara_count++;
    }

   
    printf("O lado 'cara' apareceu %d vezes.\n", cara_count);

    return 0;
}

int lancamento_moeda() {
    return rand() % 2; 
}