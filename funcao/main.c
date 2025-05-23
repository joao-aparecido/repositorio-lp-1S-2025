#include <stdio.h>

#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(struct Aluno a){
    printf("\nnota: %.2fnome: %s\n", a.nota, a.nome);
}

int main(int argc, char* argv[]){
    int n = 5;
    Aluno alunos[n];


    for(int i = 0; i < n; i++){
        printf("Digite o nome do aluno 0:\n");
        fgets(alunos[i].nome, TAM_NOME, stdin);
        printf("Digite a nota do aluno 0: ");
        scanf("%f", &alunos[i].nota);
        fflush(stdin);
    }

    Aluno aluno_maior_nota = alunos[0];
    Aluno aluno_menor_nota = alunos[0];
    float soma_notas = 0.0;
    float media_notas = 0.0;
    for(int i = 0; i < n; i++){
        if(aluno_maior_nota.nota < alunos[i].nota){
            aluno_maior_nota = alunos[i];
        }
    

     if(aluno_menor_nota.nota > alunos[i].nota){
            aluno_menor_nota = alunos[i];
        }

        soma_notas += alunos[i].nota;
    }

    printf("Aluno maior nota\n");
    imprimir_aluno(aluno_maior_nota);
    printf("Aluno Menor nota\n");
    imprimir_aluno(aluno_menor_nota);
    printf("Media das notas: %.2f", soma_notas/n);
  
    return 0;
}

