#include <stdio.h> 
#include <math.h>

int main() {
    int num_alunos, k;
    int alunos_aprovados = 0;
    float media_geral = 0.0, maior_nota = 0.0, menor_nota = 10.0;
    
    
    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);
    
  
    float notas[num_alunos];
    
   
    for (int i = 0; i < num_alunos; i++) {
        do {
            printf("Digite a nota do aluno %d (entre 0.0 e 10.0): ", i + 1);
            scanf("%f", &notas[i]);
        } while (notas[i] < 0.0 || notas[i] > 10.0); 
    }

    
    for (int i = 0; i < num_alunos; i++) {
        media_geral += notas[i];
        if (notas[i] > maior_nota) maior_nota = notas[i];
        if (notas[i] < menor_nota) menor_nota = notas[i];
        if (notas[i] >= 6.0) alunos_aprovados++;
    }
    
    media_geral /= num_alunos; 
    
  
    do {
        printf("Digite a posição (de 1 a %d) do aluno para ver a nota: ", num_alunos);
        scanf("%d", &k);
    } while (k < 1 || k > num_alunos); 


    printf("\nResultados:\n");
    printf("Média geral da turma: %.2f\n", media_geral);
    printf("Maior nota: %.2f\n", maior_nota);
    printf("Menor nota: %.2f\n", menor_nota);
    printf("Quantidade de alunos aprovados (nota >= 6.0): %d\n", alunos_aprovados);
    printf("A nota do aluno na posição %d é: %.2f\n", k, notas[k - 1]);

    return 0;
}