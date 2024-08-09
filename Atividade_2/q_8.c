#include <stdio.h>
#include <string.h>

int mat[10][2];
char hist[20] = "********************";
char car[10][20];
int main(){
for (int i = 0; i < 10; i++)
{
    mat[i][0]=i;
}
printf("Digite 10 valores entre 1 e 20: \n");
for (int i = 0; i < 10; i++)
{
    
    scanf("%d",&mat[i][1]);
    if (mat[i][1]<1 || mat[i][1]>20)
    {
       printf("Numero fora do intervalo permitido. Digite novamente.\n");
            i--; 
            continue;
    }
    
    
}

for (int i = 0; i < mat[i][1]; i++)
{
    /* code */
}


printf("Elemento   Valor  Histograma\n");
for (int i = 0; i < 10; i++)
{
   
        printf("%d        %d         %c \n", mat[i][0],mat[i][1],hist[mat[i][1]]);
    
    
}


return 0;




}