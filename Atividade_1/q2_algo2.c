#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float bruto, valor_receber, desconto;

int main(){
printf("Digite o salário Bruto: \n");
scanf("%f", &bruto);

if (bruto <= 600 && bruto >= 0)
{
    desconto = 0;
    valor_receber = bruto;
 }
if (bruto <= 1200 && bruto > 600 )
{
    desconto = bruto*0.20;
    valor_receber = 0.8*bruto;
}
if (bruto > 1200 && bruto <=  2000)
{
    desconto = bruto*0.25;
    valor_receber = 0.75*bruto;
}
if (bruto > 2000 )
{
    desconto = bruto*0.30;
    valor_receber = 0.7*bruto;
}

printf("O desconto é: %.2f. \n O valor a receber é: %.2f. \n", desconto, valor_receber);


return 0;

}