#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto a, Ponto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Uso: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    Ponto pontoA, pontoB;

    pontoA.x = atof(argv[1]);
    pontoA.y = atof(argv[2]);
    pontoB.x = atof(argv[3]);
    pontoB.y = atof(argv[4]);

    float distancia = calcularDistancia(pontoA, pontoB);

    printf("Distância entre os pontos: %.2f\n", distancia);

    return 0;
}