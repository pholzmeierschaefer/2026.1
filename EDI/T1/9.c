#include <stdio.h>

int main(int argc, char const *argb[]) {
    int matricula;
    float nota; 
    float soma_notas;
    float soma_medias_geral = 0;
    float media_individual;
    int contador_alunos = 0; 

    while (1) {
        printf("Digite a matricula do aluno (0 para sair): ");
        scanf("%d", &matricula); 

        if (matricula == 0) {
            break;
        }

        soma_notas = 0; 

        for (int i = 1; i <= 5; i++) {
            printf("Digite a nota do aluno: ");
            scanf("%f", &nota); 
            soma_notas += nota;
        }

        media_individual = soma_notas / 5;
        soma_medias_geral += media_individual;
        contador_alunos++; 

        printf("Aluno: %d Media: %.2f\n", matricula, media_individual);
    }

    
    if (contador_alunos > 0) {
        float media_geral_turma = soma_medias_geral / contador_alunos;
        printf("Media geral da turma: %.2f", media_geral_turma);
    } else {
        printf("Nenhum aluno foi registrado.");
    }
    return 0;
}