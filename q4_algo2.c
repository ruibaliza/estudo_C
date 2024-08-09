#include <stdio.h>
#include<stdlib.h>

int quantidade_maca; 
float custo_total;

int main() {

printf("Digite o numero de macas compradas:\n "); 
scanf("%d", &quantidade_maca);
if (quantidade_maca < 12) {
custo_total = quantidade_maca * 1.30;
} 
else {
custo_total = quantidade_maca * 1.00;
}
printf("Custo total da compra: R$ %.2f\n", custo_total); 
return 0;
}