#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
int idade_h1, idade_h2, idade_m1, idade_m2, h_velho, h_novo, m_velha, m_nova; 
int soma, produto;
printf("Digite a idade do primeiro homem:\n "); 
scanf("%d", &idade_h1);
printf("Digite a idade do segundo homem:\n "); 
scanf("%d", &idade_h2);
printf("Digite a idade da primeira mulher:\n ");
scanf("%d", &idade_m1);
printf("Digite a idade da segunda mulher:\n "); 
scanf("%d", &idade_m2);
if (idade_h1 > idade_h2) 
{
h_velho = idade_h1;
h_novo = idade_h2;
}
else{
h_velho = idade_h2;
h_novo = idade_h1; 
}

if (idade_m1 > idade_m2) 
{
m_velha = idade_m1;
m_nova = idade_m2;
}
else{
m_velha = idade_m2;
m_nova = idade_m1; 
}

soma= h_velho+m_nova;
produto = h_novo*m_velha;

printf("Soma das idades do homem mais velho com a mulher mais nova: %d \n", soma); 
printf("Produto das idades do homem mais novo com a mulher mais velha: %d \n", produto);
return 0; 
}
