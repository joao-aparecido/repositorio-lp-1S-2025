#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso correto: %s <menor> <maior> <esperado>\n", argv[0]);
        return 1;
    }

    int menor = atoi(argv[1]);
    int maior = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    // Validação dos argumentos
    if (menor >= maior) {
        printf("Erro: O menor valor deve ser menor que o maior valor.\n");
        return 1;
    }
    if (esperado < menor || esperado > maior) {
        printf("Erro: O valor esperado deve estar entre %d e %d.\n", menor, maior);
        return 1;
    }

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    int sorteado = (rand() % (maior - menor + 1)) + menor;

    // Verifica o resultado
    int acertou = (sorteado == esperado);

    // Exibe o resultado
    printf("Número sorteado: %d\n", sorteado);
    if (acertou) {
        printf("Parabéns! Você foi sorteado.\n");
    } else {
        printf("Não foi dessa vez.\n");
    }

    // Grava no log
    FILE *log = fopen("log.txt", "a");
    if (log == NULL) {
        printf("Erro ao abrir o arquivo de log.\n");
        return 1;
    }

    fprintf(log, "número mínimo: %d\n", menor);
    fprintf(log, "número máximo: %d\n", maior);
    fprintf(log, "número esperado: %d\n", esperado);
    fprintf(log, "número sorteado: %d\n", sorteado);
    fprintf(log, "resultado: %s\n\n", acertou ? "sorteado" : "não sorteado");
    fclose(log);

    return 0;
}