#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int m,n,p,i,j,k;


int main(){
printf("Multiplicaremos a matriz A (m por n), por uma matiz B (n por p). \n");
printf("Digite as dimensoes m, n e p das matrizes a serem multiplicadas.\n");
scanf("%d %d %d", &m, &n, &p);
float A[m][n], B[n][p], C[m][p];
printf("Digite os elementos da matriz A, linha por linha: \n");
for ( i = 0; i < m; i++)
{
 for (j = 0; j < n; j++)
 {
    scanf("%f", &A[i][j]);
 }
 
}

printf("Digite os elementos da matriz B, linha por linha: \n");
for ( i = 0; i < n; i++)
{
 for (j = 0; j < p; j++)
 {
    scanf("%f", &B[i][j]);
 }
 
}

for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }




printf("A matriz C eh: \n");
for ( i = 0; i < m; i++)
{
 for (j = 0; j < p; j++)
{
    printf("%.2f  ", C[i][j]);
 }
printf("\n");
}




return 0;
}