#include <stdio.h>
#include <string.h>

int num = 5;


int main() {
    char nomes[num][20];
    float medidas[num][3]; // [altura, peso, IRA]

    // Recebendo os dados dos estudantes
    for (int i = 0; i < num; i++) {
        printf("Estudante %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Altura (em metros): ");
        scanf("%f", &medidas[i][0]);
        printf("Peso (em quilos): ");
        scanf("%f", &medidas[i][1]);
        printf("IRA: ");
        scanf("%f", &medidas[i][2]);
    }

    // Calculando médias
    float media_altura = 0, media_peso = 0, media_ira = 0;
    for (int i = 0; i < num; i++) {
        media_altura += medidas[i][0];
        media_peso += medidas[i][1];
        media_ira += medidas[i][2];
    }
    media_altura /= num;
    media_peso /= num;
    media_ira /= num;

    // Encontrando os maiores valores
    float maior_altura = medidas[0][0], maior_peso = medidas[0][1], maior_ira = medidas[0][2];
    char nome_maior_altura[20], nome_maior_peso[20], nome_maior_ira[20];
    for (int i = 1; i < num; i++) {
        if (medidas[i][0] > maior_altura) {
            maior_altura = medidas[i][0];
            strcpy(nome_maior_altura, nomes[i]);
        }
        if (medidas[i][1] > maior_peso) {
            maior_peso = medidas[i][1];
            strcpy(nome_maior_peso, nomes[i]);
        }
        if (medidas[i][2] > maior_ira) {
            maior_ira = medidas[i][2];
            strcpy(nome_maior_ira, nomes[i]);
        }
    }

    // Encontrando os menores valores
    float menor_altura = medidas[0][0], menor_peso = medidas[0][1], menor_ira = medidas[0][2];
    for (int i = 1; i < num; i++) {
        if (medidas[i][0] < menor_altura) menor_altura = medidas[i][0];
        if (medidas[i][1] < menor_peso) menor_peso = medidas[i][1];
        if (medidas[i][2] < menor_ira) menor_ira = medidas[i][2];
    }

    // Imprimindo resultados
    printf("\nMedia altura: %.2f\n", media_altura);
    printf("Maior altura: %s (%.2f)\n", nome_maior_altura, maior_altura);
    printf("Menor altura: %.2f\n", menor_altura);

    printf("\nMedia peso: %.2f\n", media_peso);
    printf("Maior peso: %s (%.2f)\n", nome_maior_peso, maior_peso);
    printf("Menor peso: %.2f\n", menor_peso);

    printf("\nMedia IRA: %.2f\n", media_ira);
    printf("Maior IRA: %s (%.2f)\n", nome_maior_ira, maior_ira);
    printf("Menor IRA: %.2f\n", menor_ira);

    return 0;
}