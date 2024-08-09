#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() { int x, y;
int soma_pares = 0;
int multiplicacao_impares = 1;
printf("Digite dois numeros inteiros positivos X e Y, tal que X < Y-2:\n "); 
scanf("%d %d", &x, &y);
if (x >= y - 2) {
printf("Por favor, insira X < Y-2.\n");
return 1;
}

if (x % 2 == 0) { soma_pares += x;
} else 
{
multiplicacao_impares *= x;
}
if (y % 2 == 0) 
{ soma_pares += y;
} 
else 
{
multiplicacao_impares *= y;
}
for (int i = x + 1; i < y; i++) {
if (i % 2 == 0) 
{ soma_pares += i;
} else 
{ multiplicacao_impares *= i;
} 
}
printf("Soma dos números pares: %d\n", soma_pares);
printf("Multiplicação dos números ímpares: %d \n", multiplicacao_impares);
return 0; }
