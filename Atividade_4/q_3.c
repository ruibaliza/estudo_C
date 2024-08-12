#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Carta {
    char naipe[10];
    char valor[10];
};
void copiarString(char destino[], const char origem[]);




void inicializarBaralho(struct Carta baralho[]) {
    char naipes[4][10] = {"Paus", "Ouros", "Copas", "Espadas"};
    char valores[13][10] = {"Ás", "Dois", "Três", "Quatro", "Cinco", "Seis", "Sete",
                            "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            copiarString(baralho[i * 13 + j].naipe, naipes[i]);
            copiarString(baralho[i * 13 + j].valor, valores[j]);
        }
    }
}


void embaralharBaralho(struct Carta baralho[]) {
    srand(time(NULL));
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        struct Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
}


void exibirBaralho(struct Carta baralho[]) {
    for (int i = 0; i < 52; i++) {
        printf("%s de %s\n", baralho[i].valor, baralho[i].naipe);
    }
}

void copiarString(char destino[], const char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0'; 
}


int main() {
    struct Carta baralho[52];
    int opcao;

    inicializarBaralho(baralho);

    printf("Digite 1 para exibir o baralho ordenado ou 0 para embaralhado: ");
    scanf("%d", &opcao);

    if (opcao == 0) {
        embaralharBaralho(baralho);
    }

    exibirBaralho(baralho);
    printf("\n"); 

    return 0;
}