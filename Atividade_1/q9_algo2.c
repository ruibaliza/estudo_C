#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho_lado;
int main() {

printf("Digite o tamanho do lado do quadrado: "); 
scanf("%d", &tamanho_lado);
if (tamanho_lado <= 0) {
printf("Tamanho do lado eh invalido.\n");
return 1; 
}
for (int i = 0; i < tamanho_lado; i++) {
for (int j = 0; j < tamanho_lado; j++) { 
    if (i == 0 || i == tamanho_lado - 1 || j == 0 || j == tamanho_lado - 1)
{
printf("*"); 
}
else
printf(" "); }
printf("\n");

printf("\n"); }
return 0; 
}