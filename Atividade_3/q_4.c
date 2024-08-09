#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int lancar_dados() {
    int dado1 = rand() % 6 + 1; 
    int dado2 = rand() % 6 + 1; 
    return dado1 + dado2;
}


void jogo_craps() {
    int soma, ponto;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com uma semente nova
    
    soma = lancar_dados(); 

    
    if (soma == 7 || soma == 11) {
        printf("Você ganhou! Soma dos dados no primeiro lançamento: %d\n", soma);
        return;
    } else if (soma == 2 || soma == 3 || soma == 12) {
        printf("Você perdeu! Soma dos dados no primeiro lançamento: %d\n", soma);
        return;
    } else {
        ponto = soma; 
        printf("O Ponto eh: %d\n", ponto);
    }

    
    while (1) {
        soma = lancar_dados();
        printf("Soma dos dados: %d\n", soma);

        if (soma == ponto) {
            printf("Você ganhou!\n");
            return;
        } else if (soma == 7) {
            printf("Você perdeu!\n");
            return;
        }
    }
}

int main() {
    
    printf("\nJogo de Craps\n");
    jogo_craps();
    printf("Obrigado por jogar!\n");
    
    return 0;
}