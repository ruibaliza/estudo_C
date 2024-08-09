#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int f[11];
int r, i;

int main(){
    for ( i = 0; i < 11; i++)
    {
        f[i]=0;
    }
    
for ( i = 0; i < 40; i++)
{   
printf("Quantas vezes voce vai a biblioteca por mes? \n");
scanf("%d", &r);
if (r==(-1))
{
    break;
}

switch (r)
{
case 0:
    f[0]+= 1;
    break;
case 1:
    f[1]+= 1;
    break;
case 2:
    f[2]+= 1;
    break;
case 3:
    f[3]+= 1;
    break;
case 4:
    f[4]+= 1;
    break;
case 5:
    f[5]+= 1;
    break;
case 6:
    f[6]+= 1;
    break;
case 7:
    f[7]+= 1;
    break;
case 8:
    f[8]+= 1;
    break;
case 9:
    f[9]+= 1;
    break;
case 10:
    f[10]+= 1;
    break;
default:
    break;
}

}

for ( i = 0; i < 11; i++)
{
printf("%d %d \n",i,f[i]);
}


}