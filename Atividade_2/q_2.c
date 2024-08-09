#include <stdio.h>
#include <ctype.h>

int max = 20;

int main() {
    char nome[max]; 
    int i;

    
    printf("Digite o primeiro nome em minúsculo (até 20 caracteres):\n  ");
    scanf("%s", nome);

    
    for (i = 0;i < max ; i++) {
        printf("%c ", toupper(nome[i])); 
    }
printf("\n");
    return 0;
}

