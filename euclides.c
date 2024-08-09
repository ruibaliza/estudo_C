#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num1, num2, menor, maior, a, b;
int resto;
int main() {
printf("Digite dois numeros naturais separados por espaco: "); 
scanf("%d %d", &num1, &num2);
int mdc;
if (num1<= num2)
{
    menor=num1;
    maior=num2;

}
else
{
    menor=num2;
    maior=num1;
}
a=maior;
b=menor;

while (b != 0) {

resto = a % b; 
a = b;
b = resto;
}

mdc= a;
printf("O MDC de %d e %d eh: %d\n", num1, num2, mdc);
return 0; 
}