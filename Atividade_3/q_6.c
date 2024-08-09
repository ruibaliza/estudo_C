#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int num_aleatorio() {
    return rand() % 5;
}


void criar_frase(char frase[][100], char artigos[][10], char substantivos[][10], char verbos[][10], char preposicoes[][10]) {
    strcpy(frase,artigos[num_aleatorio()]);
    strcat(frase, " ");
    strcat(frase, substantivos[num_aleatorio()]);
    strcat(frase, " ");
    strcat(frase, verbos[num_aleatorio()]);
    strcat(frase, " ");
    strcat(frase, preposicoes[num_aleatorio()]);
    strcat(frase, " ");
    strcat(frase, artigos[num_aleatorio()]);
    strcat(frase, " ");
    strcat(frase, substantivos[num_aleatorio()]);
    strcat(frase, ".");
}

int main() {
    char artigos[5][10] = {"o", "um", "algum", "todo", "qualquer"};
    char substantivos[5][10] = {"menino", "homem", "cachorro", "carro", "gato"};
    char verbos[5][10] = {"passou", "pulou", "correu", "saltos", "andou"};
    char preposicoes[5][10] = {"sobre", "sob", "ante", "ate", "com"};
    char frase[100];
    int i;

    srand(time(NULL)); 

    
    for (i = 0; i < 20; i++) {
        frase[0] = '\0'; 
        criar_frase(frase, artigos, substantivos, verbos, preposicoes);

        // Capitaliza a primeira letra da frase
        frase[0] = frase[0] - 32;

        printf("%s\n", frase);
    }

    return 0;
}