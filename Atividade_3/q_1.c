#include <stdio.h>


void inverterDigitos();
int inverterNumero();

int u,d,c,dm,opcao;


int main() {
    int numero;
    
    printf("Digite um número entre 1000 e 9999: ");
    scanf("%d", &numero);
     
    
    
    if(numero < 1000 || numero > 9999) {
        printf("Número inválido!\n");
        return 1;
    }
    
    u = numero%10;
    dm = numero/1000;
    c = (numero - (dm * 1000))/100;
    d = (numero - (dm * 1000 + c*100))/10; 
    
    printf("Voce quer considerar os zeros a esquerda?\n");
    printf("1 - Sim. \n2 - Nao. \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    inverterDigitos(dm,c,d,u);
    
     break;
    
    case 2:
    printf("O numero com os dígitos invertidos é: %d\n",inverterNumero(dm,c,d,u));
    break;

    default:
        break;
    }

    return 0; // Retorna 0 para indicar sucesso
}

void inverterDigitos(dm,c,d,u)
{
    printf("O número invertido é %d%d%d%d . \n",u, d, c, dm);
}

int inverterNumero(dm,c,d,u)
{

return(u*1000 + d*100 + c*10 + dm);


}