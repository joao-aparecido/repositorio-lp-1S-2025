#include <stdio.h> 
#include <math.h>

int main(int argc, char* argv[]){

    int numAlunos, i, aprovados = 0, k;
    float soma = 0.0, media, MaiorNota = 0.0, MenorNota = 10.0;

    printf("Digite a quantidade de alunos : ");
    scanf("%d", &numAlunos);

    float notas[numAlunos];

     for (i = 0; i < numAlunos; i++) {
        do {
            printf("\nDigite a nota do aluno %d: ", i);
            scanf("%f", &notas[i]);
        } while (notas[i] < 0.0 || notas[i] > 10.0);
    }
    soma += notas[i];

    if (notas[i] > MaiorNota) MaiorNota = notas[i];
    if (notas[i] < MenorNota) MenorNota = notas[i];
    if (notas[i] >= 6.0) aprovados++;

    return 0;
}   