#include <stdio.h>

#define TAM_NOME 64

int num_alunos;

printf("Digite o numero de alunos: ");
scanf("%d", &num_alunos);

for (int i = 0; i < num_alunos; i++) {
        do {
            printf("Digite a nota do aluno %d (entre 0.0 e 10.0): ", i + 1);
            scanf("%f", &notas[i]);
        } while (notas[i] < 0.0 || notas[i] > 10.0); 
    }


struct Aluno {
    char nome[TAM_NOME];
    float nota;
};

int main(){
    int n = 5;
    struct Aluno aluno[n];

    printf("Digite o nome do aluno 0:\n");
    fgets(aluno[0].nome, TAM_NOME, stdin);

    printf("Digite a nota do aluno 0: ");
    scanf("%f", &aluno[0].nota);

    // Exibindo os dados para confirmar
    printf("\nAluno: %sNota: %.2f\n", aluno[0].nome, aluno[0].nota);

    return 0;
}

