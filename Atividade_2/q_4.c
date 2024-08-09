#include <stdio.h>

int main()
{
 printf("Digite 10 numeros entre 10 e 100:\n");
    int vet1[10], vetaux[5];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet1[i]);
    if (vet1[i] < 10 || vet1[i] > 100) {
            printf("Numero fora do intervalo permitido. Digite novamente.\n");
            i--; 
            continue;
        }
    }

    int teste = 0, tam = 0;

    for (int i = 0; i < 10; i++)
    {
        teste = 0;

        vetaux[tam] = vet1[i];

        for (int j = i + 1; j < 10; j++)
        {
            if (vet1[i] == vet1[j])
            {
                teste++;
            }
        }

        if (teste == 0)
        {
            tam--;
        }

        for (int j = 0; j < tam; j++)
        {
            if (vet1[i] == vetaux[j])
            {
                tam--;
            }
        }
        tam++;
    }
    printf("\n\n");

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetaux[i]);
    }
    printf("\n\n");
return 0;
}
