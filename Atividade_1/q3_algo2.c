#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char destino;
int trecho;

int main(){

printf("Escolha uma das opcoes de regiao para viajar: \n");
printf("A - Regiao Norte\n");
printf("B - Regiao Nordeste\n");
printf("C - Regiao Centro-Oeste \n");
printf("D - Regiao Sul\n");
scanf("%s",&destino);

printf(" Escolha uma das opcoes: \n");
printf("0 - Ida \n");
printf("1 - Volta \n ");
scanf("%d",&trecho);

if ((destino=='A' || destino=='a')&& trecho == 0)
{
printf("O valor da passagem eh 500 reais \n ");
}
if ((destino=='A' || destino=='a')&& trecho == 1)
{
printf("O valor da passagem eh 900 reais \n ");
}

if ((destino=='B' || destino=='b')&& trecho == 0)
{
printf("O valor da passagem eh 350 reais \n ");
}
if ((destino=='B' || destino=='b')&& trecho == 1)
{
printf("O valor da passagem eh 650 reais \n ");
}

if ((destino=='C' || destino=='c')&& trecho == 0)
{
printf("O valor da passagem eh 350 reais \n ");
}
if ((destino=='C' || destino=='c')&& trecho == 1)
{
printf("O valor da passagem eh 600 reais \n ");
}

if ((destino=='D' || destino=='d')&& trecho == 0)
{
printf("O valor da passagem eh 300 reais \n ");
}
if ((destino=='D' || destino=='d')&& trecho == 1)
{
printf("O valor da passagem eh 550 reais \n ");
}

return 0;
}