#include <stdio.h>
#include <string.h>

char equipes[16] = "ABCDEFGHIJKLMNOP";
char quartas[8],semi[4], final[2], win[1];
int mat[15][2];

int main(){
   printf("Digite sequencialmente os numeros de gol de cada jogos:\n");

   for (int  i = 0; i < 15; i++)
   {
    for (int j = 0; j < 2; j++) 
    {
        scanf("%d",&mat[i][j]);
    
    }
    printf("\n");
    if (mat[i][0]==mat[i][1])
    {
        printf("Nao pode ter empate, repita o resultado do ultimo jogo.\n");
        i--;
        continue;
    }
    

   }
   
for (int i = 0; i < 8; i++)
{
    if (mat[i][0]< mat[i][1])
    {
        quartas[i]=equipes[2*i+1];
    }
    if (mat[i][0]> mat[i][1])
    {
        quartas[i]=equipes[2*i];
    }
}

for (int i = 0; i < 4; i++)
{
    if (mat[i+8][0]< mat[i+8][1])
    {
        semi[i]=quartas[2*i+1];
    }
    if (mat[i+8][0]> mat[i+8][1])
    {
        semi[i]=quartas[2*i];
    }
}
for (int i = 0; i < 2; i++)
{
    if (mat[i+12][0]< mat[i+12][1])
    {
        final[i]=semi[2*i+1];
    }
    if (mat[i+12][0]> mat[i+12][1])
    {
        final[i]=semi[2*i];
    }
}

if (mat[15][0]< mat[15][1])
    {
        win[0] = final[0];
    }
    if (mat[15][0]> mat[15][1])
    {
        win[0]=final[1];
    }
printf("O campeao eh %c : \n", win[0]);


    


return 0;

}