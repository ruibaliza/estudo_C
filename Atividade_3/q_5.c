#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int escolher_numero(){

     srand(time(NULL)); // para iniciar o gerador de numeros aleatoriós com uma semente diferente
    int numero = rand()%999 + 1;
    return numero;
}
int main(){
int numero;
numero = escolher_numero();
printf("Voce quer advinhar meu numero?\n");
printf("Digite seu palpite:\n");
int escolha;

while(1){

scanf("%d",&escolha);

if (escolha == numero)

{
printf("Excelente! Você adivinhou o número!");
return 1;
}
if (escolha < numero)
{
    printf("Muito baixo. Tente novamente.\n");
}
if (escolha > numero)
{
    printf("Muito alto. Tente novamente.\n");
}
}

return 0;

}