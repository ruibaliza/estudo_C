#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float valor_entrada, valor_saida;

int main(){

printf("Digite o valor da compra do produto:\n ");
scanf("%f",&valor_entrada );

if (valor_entrada < 20 )
{
    valor_saida = valor_entrada * 1.45;
}
else
{
    valor_saida = valor_entrada * 1.30;
}
 

printf("O valor de venda é: %f !", valor_saida);

return 0;
}