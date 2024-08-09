#include <stdio.h>

int mat[10][2];
int i;
int main(){
for ( i = 0; i < 10; i++)
{
        mat[i][0] = i; 
        mat[i][1] = 2*i+2;
}

printf("Elemento    Valor \n");
for ( i = 0; i < 10; i++)
{
    printf("%d             %d \n",mat[i][0],mat[i][1]);
}
return 0;
}