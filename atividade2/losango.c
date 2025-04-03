#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float area;
    float diagonal_maior;
    float diagonal_menor;

    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);

    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;
    printf("area eh: %.2f", area);

    return 0;
} 