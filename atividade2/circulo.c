#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float area;
    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = (raio * raio) * M_PI;
    printf("area eh: %.2f", area);
}