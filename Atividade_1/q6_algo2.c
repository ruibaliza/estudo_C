#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numero; 
int soma = 0;

int main() {

printf("Digite numeros positivos (ou negativo para sair):\n");
while (2) {
scanf("%d", &numero);
if (numero < 0) { break;
}
soma = soma + numero; }
printf("A soma dos números positivos é: %d\n", soma);
return 0; }
