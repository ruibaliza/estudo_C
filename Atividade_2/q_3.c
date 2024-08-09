#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tam=20;

int main() {
    char palavra[tam]; 
    int i, trocas = 0;

    
    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    
    for (i = 0; i< tam  ; i++) {
        if (palavra[i] == 'r') {
            palavra[i] = 'l';
            trocas++;
        } else if (palavra[i] == 'R') { 
            palavra[i] = 'L';
            trocas++;
        }
    }

   
    printf("Cebolinha falaria: %s\n", palavra);

    
    if (trocas > 0) {
        printf("Houve troca nos caracteres: ");
        for (i = 0; i < tam; i++) {
            if (palavra[i] == 'l' || palavra[i] == 'L') {
                printf("%d, ", i + 1);
            }
        }
        printf("\n");
    } else {
        printf("Não houve troca nos caracteres.\n");
    }

    return 0;
}