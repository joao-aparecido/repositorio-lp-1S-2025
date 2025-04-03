#include <stdio.h>
#include <math.h> 

int main(int argc, char* argv[]){
    float altura; 
    float base;
    float area;

    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);

    printf("digite o valor da altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("area eh: %.2f", area);

    return 0;
}