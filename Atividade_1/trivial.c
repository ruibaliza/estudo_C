#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num1, num2, menor;
int main() {
printf("Digite dois numeros naturais separados por espaco: "); 
scanf("%d %d", &num1, &num2);
int mdc = 1;
if (num1<= num2)
{
    menor=num1;
}
else
{
    menor=num2;
}
for (int i = 1; i <= menor; i++) {
if (num1 % i == 0 && num2 % i == 0) {
mdc = i; }
}

printf("O MDC de %d e %d eh: %d\n", num1, num2, mdc);
return 0; 
}