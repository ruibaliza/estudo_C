#include <stdio.h>
#include <string.h>

int MAX_NOME = 21;
int NUM_ESTUDANTES = 5;

struct Estudante {
    char nome[21];
    float altura;
    float peso;
    float IRA;
};

void calcular_medias(struct Estudante estudantes[]) {
    float soma_peso = 0, soma_altura = 0, soma_IRA = 0;
    float media_peso, media_altura, media_IRA;
    for (int i = 0; i < NUM_ESTUDANTES; i++) {
        soma_peso += estudantes[i].peso;
        soma_altura += estudantes[i].altura;
        soma_IRA += estudantes[i].IRA;
    }

    media_peso = soma_peso / NUM_ESTUDANTES;
    media_altura = soma_altura / NUM_ESTUDANTES;
    media_IRA = soma_IRA / NUM_ESTUDANTES;
    
    printf("Media de peso: %.3f\n", media_peso);
    printf("Media de altura: %.3f\n", media_altura);
    printf("Media de IRA: %.2f\n\n", media_IRA);

}

void encontrar_maior(struct Estudante estudantes[], float media_peso, float media_altura, float media_IRA) {
    float maior_peso = estudantes[0].peso;
    float maior_altura = estudantes[0].altura;
    float maior_IRA = estudantes[0].IRA;
    char nome_maior_peso[MAX_NOME], nome_maior_altura[MAX_NOME], nome_maior_IRA[MAX_NOME];

    strcpy(nome_maior_peso, estudantes[0].nome);
    strcpy(nome_maior_altura, estudantes[0].nome);
    strcpy(nome_maior_IRA, estudantes[0].nome);

    for (int i = 1; i < NUM_ESTUDANTES; i++) {
        if (estudantes[i].peso > maior_peso) {
            maior_peso = estudantes[i].peso;
            strcpy(nome_maior_peso, estudantes[i].nome);
        }
        if (estudantes[i].altura > maior_altura) {
            maior_altura = estudantes[i].altura;
            strcpy(nome_maior_altura, estudantes[i].nome);
        }
        if (estudantes[i].IRA > maior_IRA) {
            maior_IRA = estudantes[i].IRA;
            strcpy(nome_maior_IRA, estudantes[i].nome);
        }
    }

    printf("Maior peso: %s (%.3f)\n", nome_maior_peso, maior_peso);
    printf("Maior altura: %s (%.3f)\n", nome_maior_altura, maior_altura);
    printf("Maior IRA: %s (%.2f)\n", nome_maior_IRA, maior_IRA);
}

int main() {
    struct Estudante estudantes[NUM_ESTUDANTES];
    float media_peso, media_altura, media_IRA;
    printf("Digite os dados dos alunos, separando por espaço os dados e os alunos por enter \n");

    for (int i = 0; i < NUM_ESTUDANTES; i++) {
        scanf("%s %f %f %f", estudantes[i].nome, &estudantes[i].altura, &estudantes[i].peso, &estudantes[i].IRA);
    }

    calcular_medias(estudantes);
    
    encontrar_maior(estudantes, media_peso, media_altura, media_IRA);

    return 0;
}